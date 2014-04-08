/********************************************************************
 *  Copyright(C) 2013 Zrong ( All rights reserved. )
 *	Created:	2013/03/20   14:53
 *	File base:	HSBalloonConfig.h
 *	Author:		Ambition
 *	
 *	Purpose:	
*********************************************************************/
#ifndef __HSBalloonConfig_H__
#define __HSBalloonConfig_H__
#pragma once
#include "HSBase.h"
#include "HSTime.h"
#include "HSMath.h"
#include "HSSoundManage.h"

typedef struct _BalloonTestInfo
{
	int   balloonNumber_;//�������

	float linearVelocity;//�����ٶ�

	float linearDamping_;//��������

	float density_______;//�ܶ�

	float friction______;//Ħ����

	float restitution___;//���Ա���

	void Reset()
	{
		balloonNumber_ = 20;
		linearVelocity = 2.f;
		linearDamping_ = 0.5f;

		density_______ = 2.f;
		friction______ = 1.f;
		restitution___ = 0.2f;
	}
	
	void Set(const _BalloonTestInfo& config)
	{
		balloonNumber_ = config.balloonNumber_;
		linearVelocity = config.linearVelocity;
		linearDamping_ = config.linearDamping_;
		density_______ = config.density_______;
		friction______ = config.friction______;
		restitution___ = config.restitution___;
	}

	_BalloonTestInfo()
	{
		Reset();
	}
	
}BalloonTestInfo;

typedef enum _BalloonColorType
{
	BALLOON_COLOR_UNKNOW = 0,
	BALLOON_COLOR_BLUE,//��ɫ
	BALLOON_COLOR_BROWN,//��ɫ
	BALLOON_COLOR_GREEN,//��ɫ
	BALLOON_COLOR_ORANGE,//��ɫ
	BALLOON_COLOR_PURPLE,//��ɫ
}BalloonColorType;

typedef enum {
	BALLOON_PROPS_UnKnow = 0x1b,
	BALLOON_PROPS_King,				//�ʹڵ���
	BALLOON_PROPS_Bomb,				//��ը����
	BALLOON_PROPS_Money,			//��ҵ���
	BALLOON_PROPS_StopStratagemTime,//ֹͣ����ʱ�����
	BALLOON_PROPS_Fog,				//�������
	BALLOON_PROPS_AddStratagemLevel,//���صȼ���1
	BALLOON_PROPS_SubStratagemLevel,//���صȼ���1
	BALLOON_PROPS_ChangeColor,		//��ָ����Χ�ڱ�ɫ��ɫ
	BALLOON_PROPS_Shield,			//���ܵ���
	BALLOON_PROPS_Ink,				//ī֭����


	BALLOON_PROPS_ChangeColorFullScreen,	//��ɫ��֮�� ȫ���漴��ɫ(�ֶ�)
	BALLOON_PROPS_Lightning,				//��֮����
	BALLOON_PROPS_KingTime,					//��֮���� �ƽ�ʱ��(�ֶ�)
	BALLOON_PROPS_StratagemLevelByZero,		//������ˡ
}BalloonPropsType;

typedef enum {
	STRATAGEM_STATE_Stop,
	STRATAGEM_STATE_Up,
	STRATAGEM_STATE_Down,
}StratagemStateType;

#ifndef HS_TEST_MODE
#define HS_TEST_MODE 0
#endif
typedef struct _BalloonGameData
{
	_BalloonGameData()
	{
		Reset();
	}

	void Reset()
	{
		dribbleCount = 0;
		comboCount = 0;
		maxHit = 3;
		dribbleIntervalTime = 0.7f;

		bangBalloonCount = 0;
		playSoundID = 0;

		gameScore = 0;
		//gameGold = 0;
		lastBalloonColorType = BALLOON_COLOR_UNKNOW;
		lastBalloonPropsType = BALLOON_PROPS_UnKnow;

		energy = 0.f;
#if HS_TEST_MODE
		energyMax = 10.f;
#else
		energyMax = 100.f;
#endif

		isFreeEnergy = false;

		stratagemMaxCycleCount = 8;
#if HS_TEST_MODE
		stratagemEachCycleSec = 20;
#else
		stratagemEachCycleSec = 20;
#endif
		stratagemCurCycle = stratagemMaxCycleCount - 1;
		stratagemCurSec = stratagemEachCycleSec;
		lastStratagemLevel = stratagemCurCycle;

		//stratagemRollBackStep = 0;
		stratagemRollBackStepCount = 0;

		isDribbleFail = true;

		//isRunStratagem = false;

		curShowHowColorType = 0;

		//gameCurGold = 0;

		isKingEffect = false;

		isMoneyEffect = false;

		isKingDeath = false;

		m_isPauseStratagemTime = false;

		perEnergyList.clear();

		isShowSuperman = false;

		isListerLastBalloonType = false;

	}

	bool IsEnergyFull()
	{
		return HSMath::EqualsWithFloat(energy,energyMax);
	}


	int dribbleCount;			//������
	int comboCount;				//Combo��
	int maxHit;					//ÿ�ε��м�����һ������
	float dribbleIntervalTime;	//ÿ�������ڴ˼��ʱ����������

	long bangBalloonCount;		//�㱬���������
	int playSoundID;			//��ǰ������ЧID

	float energy;				//��ǰ����
	float energyMax;			//�������
	bool isFreeEnergy;			//�������� �Ƿ�ﵽ�ͷ�Ҫ��
	std::vector<float> perEnergyList;	//��������������ֵ

	int gameScore;	//��Ϸ�÷�
	//int gameGold;	//���
	//int gameCurGold;
	BalloonColorType lastBalloonColorType;	//���һ�ε���ɫ����
	BalloonPropsType lastBalloonPropsType;	//���һ�εĵ�������

	int curShowHowColorType;	//��ǰ��ʾ�������͵�����

	int stratagemMaxCycleCount;		//����Ȧ��
	int stratagemCurCycle;			//��ǰ�ǵڼ�Ȧ
	int stratagemEachCycleSec;		//����ÿȦ���������
	int stratagemCurSec;			//��ǰ������

	//int stratagemRollBackStep;		//���ػع�����
	int stratagemRollBackStepCount;	//���ػع�������
	bool m_isPauseStratagemTime;	//�Ƿ���ͣ���ص���ʱ
	int lastStratagemLevel;			//���һ�λ��صȼ�


	bool isDribbleFail;			//�Ƿ�����ʧ��

	//bool isRunStratagem;		//�Ƿ����л���

	bool isKingEffect;			//�Ƿ��ǻʹ�����

	bool isMoneyEffect;			//�Ƿ��ǽ��Ч��

	bool isKingDeath;			//�ʹ������Ƿ����

	bool isShowSuperman;		//�Ƿ񲥷ų��˶���

	bool isListerLastBalloonType;	//�Ƿ�������һ�����������

	BalloonColorType  freeFreeEnergyBalloonType;

}BalloonGameData;

#define HS_GAME_CONFIG() HSBalloonConfig::SharedBalloonCofig()
#define HS_GAME_CONFIG_DATA() HS_GAME_CONFIG()->GetBalloonGameData()
#define HS_GAME_CONFIG_MUTABLE_DATA() HS_GAME_CONFIG()->m_pBGD

class HSBalloonConfig
{
private:
	HSBalloonConfig(void);
public:
	~HSBalloonConfig(void);

private:
	unsigned long long m_lastTime;
	float m_dt;
	int m_stratagemMoveStep;

public:
	BalloonTestInfo* m_pBalloonTestInfo;
	BalloonGameData* m_pBGD;//m_pballoonGameData ��д
	bool m_isPauseUpdate;
	bool m_isOvertime;
	
public:
	static HSBalloonConfig* SharedBalloonCofig();

	void Reset();

	void Destroy();

	void SaveBallonConfig();

	BalloonTestInfo* ReadBalloonConfig();

	void RestBallonConfig();

	inline BalloonTestInfo* GetBalloonConfigData(){return this->m_pBalloonTestInfo;}

	void DribbleLogic(BalloonColorType colorType , int balloonID);

	void Update(float dt);

	void AddEnergy();

	const BalloonGameData* GetBalloonGameData()const;

	void SetLaseTime();

	StratagemStateType GetStratagemStateType();

	int GetStratagemMoveStep();

	void SetStratagemMoveStep(int step);

	void AddStratagemTime(int time);

	void ResetStratagemTime();

	void SetIsPause(bool b);

private:
	void StratagemTimeLogic(float dt);
};

#endif // __HSBalloonConfig_H____


