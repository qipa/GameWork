@echo off

E:
chdir E:\InstallationApplication\Cygwin\cygwin\bin
rem �¼ӵ�һ��,�ֹ�ָ��home��·��
set HOME=/cygdrive/f/work/IOS/Client/cocos2dx-2.1beta3-x-2.1.1/HSBalloon_S3_a/proj.android
bash --login -c "sh build_native.sh"
bash --login -i
rem "sh build_native.sh" 
