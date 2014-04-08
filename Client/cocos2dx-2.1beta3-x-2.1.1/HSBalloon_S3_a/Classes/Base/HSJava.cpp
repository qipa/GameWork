#include "HSJava.h"
#include "HSGameCache.h"
#include "HSGameSceneJumpManage.h"
static HSJava* s_hsJAVA = new HSJava;

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
extern "C"
{

// 	void Java_com_zrlh_tom_pkmmq_HSChannelManager_CallBuy(JNIEnv *env, jobject thiz, jbyteArray buffer)
// 	{
// 		CCLog("-Android- Java_com_Zrong_HSBalloon_HSChannelManager_CallBuy   Begin");
// 
// 		const char* pData = HSJni::JByteArrayToCharArray(env,buffer);
// 		if (s_hsJAVA)
// 		{
// 			CCLog("s_hsJAVA");
// 			if (pData)
// 			{
// 				CCLog("pData");
// 				int pDataSize = strlen(pData);
// 				CCLog("bufferSize: %d",pDataSize);
// 				s_hsJAVA->CallBuy(pData,pDataSize);
// 			}
// 		}
// 		CCLog("-Android- Java_com_Zrong_HSBalloon_HSChannelManager_CallBuy  End");
// 	}

	void Java_com_zrlh_tom_pkmmq_HSChannelManager_CallBuy(JNIEnv *env, jobject thiz, jint propID)
	{
		CCLog("-Android- Java_com_Zrong_HSBalloon_HSChannelManager_CallBuy   Begin");

		//const char* pData = HSJni::JByteArrayToCharArray(env,buffer);
		if (s_hsJAVA)
		{
			CCLog("s_hsJAVA");
			//if (pData)
			//{
				s_hsJAVA->CallBuy((int)propID);
			//}
		}
		CCLog("-Android- Java_com_Zrong_HSBalloon_HSChannelManager_CallBuy  End");
	}

	void Java_jni_JniHelper_finishInit(JNIEnv *env,jobject thiz,jstring json)
	{
		CCLog("-Android- Java_jni_JniHelper_finishInit  Begin");
		if(s_hsJAVA)
		{
			CCLog("s_hsJAVA");

			std::string j = JniHelper::jstring2string(json);
			
			s_hsJAVA->CallFinishInit(j.c_str());
		}
		CCLog("-Android- Java_jni_JniHelper_finishInit End");
	}

	void Java_jni_JniHelper_finishPay(JNIEnv *env,jobject thiz,jstring json)
	{
		CCLog("-Android- Java_jni_JniHelper_finishPay  Begin");
		if(s_hsJAVA)
		{
			CCLog("s_hsJAVA");

			std::string j = JniHelper::jstring2string(json);
			s_hsJAVA->CallFinishInit(j.c_str());
		}
		CCLog("-Android- Java_jni_JniHelper_finishPay End");
	}

	void Java_jni_JniHelper_execCallback(JNIEnv *env,jobject thiz,jstring json)
	{
		CCLog("-Android- Java_jni_JniHelper_execCallback Begin");
		if(s_hsJAVA)
		{
			CCLog("s_hsJAVA");
			std::string j = JniHelper::jstring2string(json);
			s_hsJAVA->Callback(j.c_str());
		}
		CCLog("-Android- Java_jni_JniHelper_finishPay End");
	}
};
#endif







HSJava::HSJava(void)
{
}


HSJava::~HSJava(void)
{
}

HSJava* HSJava::ShaderJava()
{
	if (s_hsJAVA)
	{
		s_hsJAVA = new HSJava;
	}

	return s_hsJAVA;
}

/**
	 * ��ʼ����� java�ص�c++����
	 * @param json
	 * key               |value
	 * status ״̬               |(int)0 �ɹ�;1ʧ��
	 * state  ʧ��ԭ��        |(String)Ŀǰ����0 ��û�ж���
	 */
void HSJava::CallFinishInit(const char* json)
{
	return;
}

/**
	 * �Ʒ���� java�ص�c++����
	 * @param json
	 * key               |value
	 * status ״̬               |(int)0 �ɹ�;1ʧ��
	 * order              |(String)������             
	 * money              |(int)Ǯ������ ��λ����
	 * state  ʧ��ԭ��        |(String)Ŀǰ����0 ��û�ж���
	 */
void HSJava::CallFinishPay(const char*)
{

	return;
}

void HSJava::Callback(const char*)
{
	
}

void HSJava::CallBuy( int propID )
{
	return;
}



/**
	 * ��ʼ�� c++����java���� �Ʒѳ�ʼ�� Ӧ��ֻ�ó�ʼ��һ�ξ��У�����ÿ�μƷѶ���ʼ��  
	 * @param json
	 * key                  |value
	 * LandScape(�Ƿ����)   |(boolean) true ����;false ���� Ĭ��������
	 */
void HSJava::Init(const char* json)
{
	return;

#if(CC_TARGET_PLATFORM ==CC_PLATFORM_ANDROID)
	HSAssert(json,"");

	CCLog("-Android- -------------------");
	 
	JniMethodInfo minfo;
	bool isOk = JniHelper::getStaticMethodInfo(minfo,"jni/JniHelper","init","(Ljava/lang/String;)V");

	if (!isOk)
	{
		HSMessageBox("jni/JniHelper/init Fail");
		return;
	}
	jstring jjson = minfo.env->NewStringUTF(json);
	minfo.env->CallStaticObjectMethod(minfo.classID,minfo.methodID,jjson);

	CCLog("-Android- -------------------");
#endif
}


/**
	 * �Ʒ� c++����java����
	 * @param json
	 * key               |value
	 * goodID            |(String)��ƷID
	 * size              |(int)����
	 * total             |(int)Ǯ������ ��λ:��   
	 */
void HSJava::Pay(const char* json)
{
#if WIN32
	HSMessageBox(json);
	return;
#endif
	

#if(CC_TARGET_PLATFORM ==CC_PLATFORM_ANDROID)
	HSAssert(json,"");

	CCLog("-Android- -------------------");
	JniMethodInfo minfo;
	bool isOk = JniHelper::getStaticMethodInfo(minfo,"jni/JniHelper","pay","(Ljava/lang/String;)V");

	if (!isOk)
	{
		HSMessageBox("jni/JniHelper/init Fail");
		return;
	}
	jstring jjson = minfo.env->NewStringUTF(json);
	minfo.env->CallStaticObjectMethod(minfo.classID,minfo.methodID,jjson);
	CCLog("-Android- -------------------");
#endif
}

void HSJava::JavaExec(const char* json)
{
	#if(CC_TARGET_PLATFORM ==CC_PLATFORM_ANDROID)
	HSAssert(json,"");

	CCLog("-Android- -------------------");
	JniMethodInfo minfo;
	bool isOk = JniHelper::getStaticMethodInfo(minfo,"jni/JniHelper","exec","(Ljava/lang/String;)V");

	if (!isOk)
	{
		HSMessageBox("jni/JniHelper/init Fail");
		return;
	}
	jstring jjson = minfo.env->NewStringUTF(json);
	minfo.env->CallStaticObjectMethod(minfo.classID,minfo.methodID,jjson);
	CCLog("-Android- -------------------");
	#endif
}

void HSJava::KillProcess()
{
	return;

#if(CC_TARGET_PLATFORM ==CC_PLATFORM_ANDROID)
	CCLog("-Android- -------------------");
	JniMethodInfo minfo;
	bool isOk = JniHelper::getStaticMethodInfo(minfo,"jni/JniHelper","killProcess","()V");

	if (!isOk)
	{
		HSMessageBox("jni/JniHelper/init Fail");
		return;
	}
	minfo.env->CallStaticObjectMethod(minfo.classID,minfo.methodID);

	CCLog("-Android- -------------------");
#endif
}

void HSJava::ShowToast( const char* text,int dt )
{
	return;

#if(CC_TARGET_PLATFORM ==CC_PLATFORM_ANDROID)
	JniMethodInfo minfo;
	bool isOk = JniHelper::getStaticMethodInfo(minfo,"jni/JniHelper","showToast","(Ljava/lang/String;I)V");

	if (!isOk)
	{
		HSMessageBox("jni/JniHelper/showToast Fail");
		return;
	}
	jstring jTitle = minfo.env->NewStringUTF(text);
	minfo.env->CallStaticObjectMethod(minfo.classID,minfo.methodID,jTitle,dt);
#endif
}

