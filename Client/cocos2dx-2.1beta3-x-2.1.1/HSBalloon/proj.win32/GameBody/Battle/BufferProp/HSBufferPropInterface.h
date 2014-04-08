/********************************************************************
 *  Copyright(C) 2013 Zrong ( All rights reserved. )
 *	Created:	2013/07/16   17:34
 *	File base:	HSBufferPropInterface.h
 *	Author:		Ambition
 *	
 *	Purpose:	
*********************************************************************/
#ifndef __HSBufferPropInterface_H__
#define __HSBufferPropInterface_H__
#pragma once
#include "HSTool.h"

typedef bool (CCObject::*BufferBegin)();
typedef bool (CCObject::*BufferEnd)();
#define hs_call_buffer_Begin(__Begin__) (BufferBegin)(&__Begin__)
#define hs_call_buffer_End(__End__) (BufferEnd)(&__End__)

typedef enum
{
	Buffer_Porp_GoldErupt = 1004,		//��ұ���
}HSBufferPropType;


//////////////////////////////////////////////////////////////////////////

class HSBufferPropInterface : public CCNode
{
public:
	HSBufferPropInterface(void);
	~HSBufferPropInterface(void);

private:

	enum HSBufferStart
	{
		BufferStart_Idle,
		BufferStart_Listening,
		BufferStart_LogicBegin,
		BufferStart_LogicEnd,
	};

private:
	CCObject* m_pRecBegin;
	CCObject* m_pRecEnd;

	BufferBegin m_pFuncBegin;
	BufferEnd   m_pFuncEnd;

	HSBufferStart m_bufferStart;

	float m_fDurationTime;
	float m_fTakeTime;

public:
	/** ���������Bufferִ�� ֮��ʼִ��  LogicBegin*/
	virtual bool LogicBegin(float dt) = 0 ;

	/** �� LogicBegin����True��ʱ��ִ�� */
	virtual bool LogicEnd(float dt) = 0;

	/** ����ʱ�����߼� */
	virtual bool LogicCountDown(float dt) = 0;

	/** ����Buffer��ʼִ������ */
	virtual void SetListerBufferBegin(CCObject* pRec,BufferBegin isBegin);

	/** ����Buffer�����Ժ�ص����� */
	virtual void SetListerBufferEnd(CCObject* pRec,BufferEnd isEnd);

	/** ����Buffer ����ʱ��(��λ: s) */
	virtual void SetDurationTime(float dt);

	virtual float GetDurationTime();

	virtual void Updata(float dt);

	/** ����Buffer */
	virtual void Reset();

};

#endif // __HSBufferPropInterface_H____


