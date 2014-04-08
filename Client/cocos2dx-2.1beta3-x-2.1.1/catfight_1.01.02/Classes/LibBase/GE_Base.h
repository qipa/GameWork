#ifndef __GE_BASE_H__
#define __GE_BASE_H__

#include "cocos2d.h"
using namespace cocos2d;


/*
������: ��С��
QQ: 776496203
opencai@126.com
�汾: SPX 2011 +1
����޸�����: 2012.4.16 14:56

1:�޸�����ʱBUG����ԭ��ʱ����صı���
����int���͸ĳ���utime����
utime����unsigned int�����

2:�޸�������������� �������������
Ϊ�˷�תY�ᣬSPX���ƵĶ��Ǻ󶼼�ȥ
��Ļ��Ļ��С��ʵ����Ӧ�ü�ȥ����Ĵ�С

3:��SPX_Sprite �����update�����ĳ���update1��
��Ϊ��CCObject����ĳ�ͻ�ˣ������������
2012.4.18 17.06
*/

//#ifndef _GLIBCXX_USE_WCHAR_T
//#define _GLIBCXX_USE_WCHAR_T
//#endif

#include <string>
#include <vector>

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
//LOCAL_CFLAGS += -fexceptions
//typedef basic_string<wchar_t> wstring;
#endif

#ifndef _MAX_PATH
#define _MAX_PATH   260 /* max. length of full pathname */
#define _MAX_DRIVE 3   /* max. length of drive component */
#define _MAX_DIR    256 /* max. length of path component */
#define _MAX_FNAME 256 /* max. length of file name component */
#define _MAX_EXT    256 /* max. length of extension component */
#endif

using namespace std;

typedef long long int64;
typedef unsigned char byte;

typedef vector<wstring> wstrary;
typedef vector<string> strary;

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef wchar_t wchar;
typedef unsigned int utime;

wstring GE_GetAbsolutePath(const wstring& name, const wstring& relative);
wstring GE_GetFilePath(const wstring& name);
bool GE_IsRelativePath(const wstring& name);
bool GE_GetResourcePath(const wstring& name, wstring& path);
string GE_U2A(const wstring& str);
wstring GE_A2U(const string& str);
utime GE_GetTime();

#define _T(x) L##x

#ifdef _MSC_VER
#pragma warning(disable:4290)
#pragma warning(disable:4996)
#endif /*_MSC_VER*/

#endif /*__GE_BASE_H__*/
