#ifndef _ABOUTSCENE_H_
#define _ABOUTSCENE_H_
#include "cocos2d.h"
class AboutScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(AboutScene);
	

	//cmt
};
#endif _ABOUTSCENE_H_