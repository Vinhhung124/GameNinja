#include"MainScene.h"
#include"SettingScene.h"
#include"AboutScene.h"
#include"cocos2d.h"
#include"HelloWorldScene.h"
#include"PlayScene.h"
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
	auto itemPlay = MenuItemFont::create("Play", CC_CALLBACK_1(MainScene::PlayGameClick,this));
	itemPlay->setPosition(screenSize.width / 2, 280);
	itemPlay->setFontName("fonts/arial");
	auto itemSetting = MenuItemFont::create("Setting", CC_CALLBACK_1(MainScene::SettingClick, this));
	itemSetting->setPosition(screenSize.width / 2, 240);
	itemSetting->setFontName("fonts/arial");
	auto itemMoreGame = MenuItemFont::create("More Game", nullptr);
	itemMoreGame->setPosition(screenSize.width / 2, 200);
	itemMoreGame->setFontName("fonts/arial");
	auto itemAbout = MenuItemFont::create("About", CC_CALLBACK_1(MainScene::AboutClick, this));
	itemAbout->setPosition(screenSize.width / 2, 160);
	itemAbout->setFontName("fonts/arial");
	auto menuLabel = Menu::create(itemPlay, itemSetting, itemMoreGame, itemAbout, nullptr);
	menuLabel->setPosition(0, 0);
	addChild(menuLabel);

	
	
	return true;
}
void MainScene::PlayGameClick(cocos2d::Ref* pSender) {

	auto gotoNext = CallFunc::create([]() {
		Director::getInstance()->replaceScene(PlayScene::createScene());
	});
	auto sequence = Sequence::create(DelayTime::create(0.5), gotoNext,
		nullptr);
	runAction(sequence);


}
void MainScene::SettingClick(cocos2d::Ref* pSender) {
	auto gotoNext = CallFunc::create([]() {
		Director::getInstance()->replaceScene(SettingScene::createScene());
	});
	auto sequence = Sequence::create(DelayTime::create(0.5), gotoNext,
		nullptr);
	runAction(sequence);
}
void MainScene::AboutClick(cocos2d::Ref* pSender) {
	auto gotoNext = CallFunc::create([]() {
		Director::getInstance()->replaceScene(AboutScene::createScene());
	});
	auto sequence = Sequence::create(DelayTime::create(0.5), gotoNext,
		nullptr);
	runAction(sequence);


}