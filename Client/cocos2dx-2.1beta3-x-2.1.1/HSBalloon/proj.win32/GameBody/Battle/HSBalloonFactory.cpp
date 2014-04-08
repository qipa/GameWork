#include "HSBalloonFactory.h"

HSBalloonFactory::HSBalloonFactory(void)
{
}


HSBalloonFactory::~HSBalloonFactory(void)
{
}

bool HSBalloonFactory::ReportFixture( b2Fixture* fixture )
{
	b2Body* body = fixture->GetBody();
	if (body != NULL)
	{
		HSBalloonSprite* sprite = (HSBalloonSprite*)body->GetUserData();
		if (sprite != NULL)
		{
			//CCLog("ReportFixtureCount: %d ",(int)m_balloonSpriteList.size());
			std::vector<HSBalloonSprite*>::iterator it = m_balloonSpriteList.begin();
			for (;it!=m_balloonSpriteList.end();++it)
			{
				if (sprite->GetID() == (*it)->GetID())
				{
					//��Ϊһ��װ�ÿ������ɶ����״��ɵģ�����ÿ����״�������������һ����
					//�µ����ظ�,���ж���2����ʵ�����Ƿ�һ�£�ȷ��ȡ������ ���������Ψһ��
					//CCLog("The Same : %d",sprite->GetID());
					return true;
				}
			}
			m_balloonSpriteList.push_back(sprite);
		}
	}
	return true;
	
}

void HSBalloonFactory::Reset()
{
	m_balloonSpriteList.clear();
}

std::vector<HSBalloonSprite*>* HSBalloonFactory::GetSpriteList()
{
	return &m_balloonSpriteList;
}
