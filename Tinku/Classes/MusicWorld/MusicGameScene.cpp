//
// Created by Erick Silva on 8/27/17.
//


#include "MusicGameScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* MusicGameScene::createScene() {
    return MusicGameScene::create();
}


bool MusicGameScene::init() {

    if ( !Scene::init() ) {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();


    auto label = Label::createWithTTF("Music Game", "fonts/Marker Felt.ttf", 24);
    label->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height/2));
    this->addChild(label, 1);

    CocosDenshion::SimpleAudioEngine::getInstance()->preloadBackgroundMusic("audios/song1.mp3");
    CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic("audios/song1.mp3", true);
    return true;
}
