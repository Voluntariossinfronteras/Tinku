//
// Created by Erick Silva on 8/27/17.
//

#ifndef _MUSICGAMESCENE_H
#define _MUSICGAMESCENE_H

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "ui/UIWidget.h"

USING_NS_CC;
using namespace ui;

class MusicGameScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    CREATE_FUNC(MusicGameScene);

    void playTouched(cocos2d::Ref* pSender, Widget::TouchEventType eEventType);
    void playSound(cocos2d::Ref* pSender, Widget::TouchEventType eEventType);
};

#endif
