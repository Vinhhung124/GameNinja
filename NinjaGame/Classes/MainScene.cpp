#include"MainScene.h"
#include"cocos2d.h"
#include"HelloWorldScene.h"

#include "SimpleAudioEngine.h"
USING_NS_CC;
Scene* MainScene::createScene()
{
	auto scene = Scene::create();
	auto layer = MainScene::create();


	scene->addChild(layer);
	return scene;
}
bool MainScene::init()
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
	//Creat menu
	auto itemPlay = MenuItemFont::create("Play", nullptr);
	itemPlay->setPosition(screenSize.width / 2, 280);
	itemPlay->setFontName("fonts/arial");
	auto itemSetting = MenuItemFont::create("Setting", nullptr);
	itemSetting->setPosition(screenSize.width / 2, 240);
	itemSetting->setFontName("fonts/arial");
	auto itemMoreGame = MenuItemFont::create("More Game", nullptr);
	itemMoreGame->setPosition(screenSize.width / 2, 200);
	itemMoreGame->setFontName("fonts/arial");
	auto itemAbout = MenuItemFont::create("About", nullptr);
	itemAbout->setPosition(screenSize.width / 2, 160);
	itemAbout->setFontName("fonts/arial");
	auto menuLabel = Menu::create(itemPlay, itemSetting, itemMoreGame, itemAbout, nullptr);
	menuLabel->setPosition(0, 0);
	addChild(menuLabel);

	
	
	return true;
}
void MainScene::PlayGameClick(cocos2d::Ref* pSender) {

}