//
// Created by Erick Silva on 8/24/17.
//

#include "MenuScene.h"
#include "SimpleAudioEngine.h"
#include "MusicWorld/MusicWorldScene.h"

USING_NS_CC;

Scene* MenuScene::createScene() {
    return MenuScene::create();
}


bool MenuScene::init() {

    if ( !Scene::init() ) {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto label1 = Label::createWithTTF("Mundo Musica", "fonts/Marker Felt.ttf", 26);
    auto label2 = Label::createWithTTF("Mundo Flora/Fauna", "fonts/Marker Felt.ttf", 26);
    auto label3 = Label::createWithTTF("Mundo Etc", "fonts/Marker Felt.ttf", 26);

    auto btnPlay3 = MenuItemLabel::create(label3,CC_CALLBACK_1(MenuScene::btnPlayCallback, this ) );
    btnPlay3 ->setPosition(Vec2(visibleSize.width/2,origin.y + visibleSize.height/4*1));
    btnPlay3->setColor(Color3B(255,0,0));

    auto btnPlay2 = MenuItemLabel::create(label2,CC_CALLBACK_1(MenuScene::btnPlayCallback, this ) );
    btnPlay2 ->setPosition(Vec2(visibleSize.width/2,origin.y +visibleSize.height/4*2 ));
    btnPlay2->setColor(Color3B(0,255,0));

    auto btnPlay1 = MenuItemLabel::create(label1,CC_CALLBACK_1(MenuScene::btnPlayCallback, this ) );
    btnPlay1 ->setPosition(Vec2(visibleSize.width/2,origin.y +visibleSize.height/4*3));
    btnPlay1->setColor(Color3B(0,255,0));


    auto menu = Menu::create(btnPlay1 ,btnPlay2, btnPlay3);
    menu->setPosition(Vec2(0, 0));
    menu->setColor(Color3B(200,200,200));
    this->addChild(menu, 0);

    return true;
}

void MenuScene::btnPlayCallback(Ref *pSender) {
    auto scene = MusicWorldScene::createScene();
    Director::getInstance()->replaceScene(scene);
}
