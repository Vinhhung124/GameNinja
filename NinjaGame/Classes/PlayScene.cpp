#include"PlayScene.h"
#include"cocos2d.h"
#include"HelloWorldScene.h"
#include"ui\CocosGUI.h"
#include "SimpleAudioEngine.h"
USING_NS_CC;
Scene* PlayScene::createScene()
{
	auto scene = Scene::create();
	auto layer = PlayScene::create();


	scene->addChild(layer);
	return scene;
}
bool PlayScene::init()
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
	//Creat LoadingBar
	auto loadingBarGB = Sprite::create("loading_bg.png");
	loadingBarGB->setPosition(Vec2(screenSize.width / 2, 30));
	addChild(loadingBarGB);
	static auto loadingbar = ui::LoadingBar::create("loading.png");
	loadingbar->setPercent(0);
	loadingbar->setDirection(ui::LoadingBar::Direction::LEFT);
	loadingbar->setPosition(loadingBarGB->getPosition());
	addChild(loadingbar);
	//update Loading Bar
	auto updateLoadingBar = CallFunc::create([=]() {
		if (loadingbar->getPercent() < 100)
		{
			loadingbar->setPercent(loadingbar->getPercent() + 1);
		}
		if (loadingbar->getPercent() == 100)
		{
			loadingbar->setVisible(false);
			loadingBarGB->setVisible(false);
		}
	});
	auto sequenceRunUpdateLoadingBar =
		Sequence::createWithTwoActions(updateLoadingBar, DelayTime::create(0.1f));
	auto repeat = Repeat::create(sequenceRunUpdateLoadingBar, 100);

	loadingbar->runAction(repeat);
	
	
	
	
	return true;
}
