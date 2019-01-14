#ifndef _SETTINGSCENE_H_
#define _SETTINGSCENE_H_
#include "cocos2d.h"
class SettingScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(SettingScene);
	

	//cmt
};
#endif _SETTINGSCENE_H_