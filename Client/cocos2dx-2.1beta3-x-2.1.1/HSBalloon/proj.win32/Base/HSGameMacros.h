/********************************************************************
 *  Copyright(C) 2013 Zrong ( All rights reserved. )
 *	Created:	2013/05/04   10:53
 *	File base:	HSGameMacros.h
 *	Author:		Ambition
 *	
 *	Purpose:	�궨��
*********************************************************************/
#ifndef __HSGameMacros_H__
#define __HSGameMacros_H__


#define HS_MANUAL_PROP_TYPE 1
#define HS_BUFFER_PROP_TYPE 2
#define HS_GIFT_PROP_TYPE 3
#define HS_CHEAP_PROP_TYPE 4
#define HS_LOCK_PROP_TYPE 5


#define HS_BUFFER_PROP_BASE_ID 2000	//buffer���߻���ID
#define HS_MANUAL_PROP_BASE_ID 1000	//�ֶ����߻���ID
#define HS_GIFT_PROP_BASE_ID 3000 //�������ID
#define HS_CHEAP_PROP_BASE_ID 4000//���۵��߻���ID
#define HS_LOCK_PROP_BASE_ID 5000 //�������߻���ID

#define HS_BUFFER_PROP_ID(__INDEX__) ((__INDEX__)+HS_BUFFER_PROP_BASE_ID)
#define HS_MANUAL_PROP_ID(__INDEX__) ((__INDEX__)+HS_MANUAL_PROP_BASE_ID)
#define HS_GIFT_PROP_ID(__INDEX__) ((__INDEX__)+HS_GIFT_PROP_BASE_ID)
#define HS_CHEAP_PROP_ID(__INDEX__) ((__INDEX__)+HS_CHEAP_PROP_BASE_ID)
#define HS_LOCK_PROP_ID(__INDEX__) ((__INDEX__)+HS_LOCK_PROP_BASE_ID)

#define HS_PROP_TYPE(__ID__) ((__ID__)/HS_MANUAL_PROP_BASE_ID)
#define HS_PROP_INDEX(__ID__) ((__ID__)%HS_MANUAL_PROP_BASE_ID)

// #ifdef __cplusplus
// extern "C"{
// 
// 
// }
// #endif



#endif // __HSGameMacros_H____