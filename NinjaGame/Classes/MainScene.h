#ifndef _MAINSCENE_H_
#define _MAINSCENE_H_
#include "cocos2d.h"
class MainScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(MainScene);
	void PlayGameClick(cocos2d::Ref* pSender);

	//cmt
};
#endif _MAINSCENE_H_