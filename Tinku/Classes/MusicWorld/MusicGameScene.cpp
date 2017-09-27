//
// Created by Erick Silva on 8/27/17.
//


#include "MusicGameScene.h"
#include "SimpleAudioEngine.h"


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
    label->setPosition(Vec2(origin.x + visibleSize.width/2, origin.y + visibleSize.height/2));
    this->addChild(label, 1);

    auto button = Button::create("res/play.png");
    button->setPosition(Vec2(origin.x+visibleSize.width/10, origin.y+visibleSize.height*4/5));
    button->setScale(0.1);
    button->addTouchEventListener(CC_CALLBACK_2(MusicGameScene::playTouched,this));
    this->addChild(button,1);

    auto btn1 = Button::create("res/charango.png");
    btn1->setPosition(Vec2(origin.x+visibleSize.width/6, origin.y+visibleSize.height*1/5));
    btn1->setScale(0.2);
    btn1->addTouchEventListener(CC_CALLBACK_2(MusicGameScene::playSound,this));
    this->addChild(btn1,1);

    auto btn2 = Button::create("res/maracas.png");
    btn2->setPosition(Vec2(origin.x+visibleSize.width*2/6, origin.y+visibleSize.height*1/5));
    btn2->setScale(0.2);
    btn2->addTouchEventListener(CC_CALLBACK_2(MusicGameScene::playSound,this));
    this->addChild(btn2,1);

    auto btn3 = Button::create("res/quena.png");
    btn3->setPosition(Vec2(origin.x+visibleSize.width*3/6, origin.y+visibleSize.height*1/5));
    btn3->setScale(0.2);
    btn3->addTouchEventListener(CC_CALLBACK_2(MusicGameScene::playSound,this));
    this->addChild(btn3,1);

    auto btn4 = Button::create("res/siku.png");
    btn4->setPosition(Vec2(origin.x+visibleSize.width*4/6, origin.y+visibleSize.height*1/5));
    btn4->setScale(0.2);
    btn4->addTouchEventListener(CC_CALLBACK_2(MusicGameScene::playSound,this));
    this->addChild(btn4,1);

    auto btn5 = Button::create("res/zampona.png");
    btn5->setPosition(Vec2(origin.x+visibleSize.width*5/6, origin.y+visibleSize.height*1/5));
    btn5->setScale(0.2);
    btn5->addTouchEventListener(CC_CALLBACK_2(MusicGameScene::playSound,this));
    this->addChild(btn5,1);

    CocosDenshion::SimpleAudioEngine::getInstance()->preloadBackgroundMusic("audios/song1.mp3");
    CocosDenshion::SimpleAudioEngine::getInstance()->preloadEffect("audios/sonido1.mp3");

    return true;
}

void MusicGameScene::playTouched(Ref* pSender, Widget::TouchEventType eEventType) {
    if (eEventType != ui::Widget::TouchEventType::ENDED) return;

    if(CocosDenshion::SimpleAudioEngine::getInstance()->isBackgroundMusicPlaying()){
        CocosDenshion::SimpleAudioEngine::getInstance()->stopBackgroundMusic(false);
    }else{
        CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic("audios/song1.mp3",false);
    }
}

void MusicGameScene::playSound(Ref* pSender, Widget::TouchEventType eEventType) {
    if (eEventType != ui::Widget::TouchEventType::ENDED) return;

    CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("audios/sonido1.mp3");
}


/*
 *
 *  3 casilleros donde poner los instrumentos
 *  Cargar dinamica de instrumentos
 *
 *
 */

