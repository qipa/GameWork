/********************************************************************
*  Copyright(C) 2013 Zrong ( All rights reserved. )
*	Created:	2013/04/26   16:07
*	File base:	HSPropItemSprite.h
*	Author:		Ambition
*	
*	Purpose:	ע�⿽������  HSPropItemSprite::Copy()
*********************************************************************/
#ifndef __HSPropItemSprite_H__
#define __HSPropItemSprite_H__
#pragma once
#include "HSTool.h"
#include "HSBuySlotDialog.h"
#include "HSReadUI.h"
class HSPropItemSprite;

typedef struct _HSEquipFrame
{
	_HSEquipFrame()
	{
		id = 0;
		frame = NULL;
		isEquip = false;
		equip = NULL;
		isLock = false;
	}
	int id;			//װ���� id
	HSCCSprite* frame;	//װ�����ߵ�Frame ָ�� �������� װ��
	bool isEquip;	//�Ƿ���װ��
	HSPropItemSprite* equip;
	bool isLock;	//�Ƿ� ����

}HSEquipFrame;


class HSPropItemSprite : public HSGraySprite,public CCTargetedTouchDelegate  
{
private:
	HSPropItemSprite(void);
public:
	~HSPropItemSprite(void);

public:
	static CCLabelTTF* s_lastDescribeInfo;
	static CCMenuItemImage* s_lastCCMenuItemImage;
public:
	message::PropInfo m_PropInfo;
	bool m_isCanTouch;
	bool m_isEquip;				//�жϵ�ǰװ��ʱ��װ�� װ����
	HSPropItemSprite* m_byCopyObj;	//����Ҫ�ͷ�
	HSEquipFrame* m_pEuipFrame;		//����Ҫ�ͷ�

	CCLabelTTF* m_pDescribeInfo;	//����
	CCLabelTTF* m_pNumber;          //����
	int m_curNumber;               //��ǰ����
	 
	CCSize m_describePaneSize;
public:
	static HSPropItemSprite* create(int index);

	static HSPropItemSprite* create(const message::PropInfo propInfo ,int index);

	bool Init(int index);

	bool Init(const message::PropInfo propInfo,int index);

	virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
	virtual void ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent);
	virtual void ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent);

	virtual void onEnter();

	virtual void onExit();

	void Update(float dt);

	HSPropItemSprite* Copy();

	void SetCopyObj(HSPropItemSprite* item);

	void SetEquipFrame(HSEquipFrame* frame);

	void SetIsEquip(bool is);

	void SetDescribeInfo(CCLabelTTF* pDescribeInfo);

	void SetNumber(CCLabelTTF* pNumber);

	void CallPropDialog(CCObject* obj);
};



//////////////////////////////////////////////////////////////////////////

class HSGameEquipManager : public CCNode
{
public:
	HSGameEquipManager();
	~HSGameEquipManager();
private:
	std::vector<HSEquipFrame> m_EquipFrameList;
public:
	static int m_iMaxEquipCount;	//���װ������
	static int m_iYetEquipCount;	//�Ѿ�װ������
public:
	 
	HSBuySlotDialog* m_dialog;
public:
	static HSGameEquipManager* create();

	bool Init();

	void Update(float dt);

	void CallLock(CCObject* obj);	//��������ť�ص�

	static bool GetIsCanEquip();

	void CallBattleScene(CCObject* obj);

	void SaveEquipProp();

	void CallOk(CCObject* obj);

	void CallCancle(CCObject* obj);

	 

};







#endif // __HSPropItemSprite_H____

