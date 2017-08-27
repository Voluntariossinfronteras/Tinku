//
// Created by Erick Silva on 8/26/17.
//

#include "MusicWorldScene.h"
#include "MusicGameScene.h"

USING_NS_CC;

Scene* MusicWorldScene::createScene() {
    return MusicWorldScene::create();
}


bool MusicWorldScene::init() {

    if ( !Scene::init() ) {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto label1 = Label::createWithTTF("Cumbia", "fonts/Marker Felt.ttf", 26);
    auto label2 = Label::createWithTTF("Joropo", "fonts/Marker Felt.ttf", 26);
    auto label3 = Label::createWithTTF("Samba", "fonts/Marker Felt.ttf", 26);

    auto btnPlay3 = MenuItemLabel::create(label3,CC_CALLBACK_1(MusicWorldScene::btnPlayCallback, this ) );
    btnPlay3 ->setPosition(Vec2(visibleSize.width/2,origin.y + visibleSize.height/4*1));
    btnPlay3->setColor(Color3B(255,0,0));

    auto btnPlay2 = MenuItemLabel::create(label2,CC_CALLBACK_1(MusicWorldScene::btnPlayCallback, this ) );
    btnPlay2 ->setPosition(Vec2(visibleSize.width/2,origin.y +visibleSize.height/4*2 ));
    btnPlay2->setColor(Color3B(0,255,0));

    auto btnPlay1 = MenuItemLabel::create(label1,CC_CALLBACK_1(MusicWorldScene::btnPlayCallback, this ) );
    btnPlay1 ->setPosition(Vec2(visibleSize.width/2,origin.y +visibleSize.height/4*3));
    btnPlay1->setColor(Color3B(0,255,0));


    auto menu = Menu::create(btnPlay1 ,btnPlay2, btnPlay3);
    menu->setPosition(Vec2(0, 0));
    menu->setColor(Color3B(200,200,200));
    this->addChild(menu, 0);

    return true;
}

void MusicWorldScene::btnPlayCallback(Ref *ref){
    auto scene = MusicGameScene::createScene();
    Director::getInstance()->replaceScene(scene);
}
