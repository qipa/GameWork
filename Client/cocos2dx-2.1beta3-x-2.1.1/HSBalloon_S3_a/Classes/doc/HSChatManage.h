/********************************************************************
 *  Copyright(C) 2012 Zrong ( All rights reserved. )
 *	Created:	2012/09/28   9:18
 *	File base:	HSChatManage.h
 *	Author:		Ambition
 *	
 *	Purpose:	����ؼ� ���ӣ�[��ǰ][����]��XXXXXXXXX
*********************************************************************/
#ifndef __HSChatManage_H__
#define __HSChatManage_H__
#pragma once
#include "HSTool.h"

class HSChat:public CCNode
{
private:
	HSChat();
	~HSChat(void);

public:
	typedef enum _ChatType
	{
		CHAT_INVALID=1,
		CHAT_CURRENT,				//��ǰ
		CHAT_WHISPER,				//˽��
		CHAT_GUILD,					//����
		CHAT_HORN					//����
	}ChatType;
private:
	CCSize frameSize;
	float fontSize;
	const char* fontName;
	CCMenu* nameMenu;
	SelectorProtocol* target;
	SEL_MenuHandler selector;

private:
	void Init();
	float GetStringWidth(string utf8);
	void SetMoveUpOneLine(CCNode* node);
public:
	static HSChat* CreateChatManage(CCSize frameSize,const char* fontName,float fontSize,SelectorProtocol *target, SEL_MenuHandler selector);
	void AddInfo(string channels, string name, string info,ChatType type );
};

class HSChatManage
{
private:
	HSChatManage(CCNode* node);
	~HSChatManage(void);

protected:
	CCNode* node;
	list<HSChat*> allInfoList;

public:
	static HSChatManage* CreateChatManage(CCNode* node);
	void AddChat(HSChat* chat);

	//test code
	//HSChatManage* chatManage = HSChatManage::CreateChatManage(this);
	//chatManage->AddChat(HSChat::CreateChatManage(CCSizeMake(400,640),"Marker Felt",25.f,this,NULL));
	//delete chatManage;

};



#endif // __HSChatManage_H__
