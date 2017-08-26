#include "SplashScene.h"
#include "SimpleAudioEngine.h"
#include "MenuScene.h"

USING_NS_CC;

Scene* SplashScene::createScene() {
    return SplashScene::create();
}


bool SplashScene::init() {

    if ( !Scene::init() ) {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();


    auto label = Label::createWithTTF("TINKU!", "fonts/Marker Felt.ttf", 24);
    label->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height/2));
    this->addChild(label, 1);

    this->schedule(schedule_selector(SplashScene::updateTimer),3.0f);

    return true;
}

void SplashScene::updateTimer(float dt){
    auto scene = MenuScene::createScene();
    Director::getInstance()->replaceScene(scene);
}

void SplashScene::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
    
    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() and exit(0) as given above,instead trigger a custom event created in RootViewController.mm as below*/
    
    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);
    
    
}
