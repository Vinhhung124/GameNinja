#ifndef _PLAYSCENE_H_
#define _PLAYSCENE_H_
#include "cocos2d.h"
class PlayScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(PlayScene);
	

	//cmt
};
#endif _PLAYSCENE_H_