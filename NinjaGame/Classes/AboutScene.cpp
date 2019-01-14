#include"AboutScene.h"
#include"cocos2d.h"
#include"HelloWorldScene.h"

#include "SimpleAudioEngine.h"
USING_NS_CC;
Scene* AboutScene::createScene()
{
	auto scene = Scene::create();
	auto layer = AboutScene::create();


	scene->addChild(layer);
	return scene;
}
bool AboutScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	auto screenSize = Director::getInstance()->getVisibleSize();
	static auto background = Sprite::create("n.png");  
	//Set backgroud
	background->setPosition(screenSize.width / 2, screenSize.height / 2);
	background->setScale(0.5);
	addChild(background);


	
	
	return true;
}
