//
// Created by Erick Silva on 8/24/17.
//

#ifndef __MENU_SCENE_H__
#define __MENU_SCENE_H__

#include "cocos2d.h"

class MenuScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();


    virtual bool init();


    void btnPlayCallback(cocos2d::Ref* pSender);

    CREATE_FUNC(MenuScene);
};

#endif
