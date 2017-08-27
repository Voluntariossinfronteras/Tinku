//
// Created by Erick Silva on 8/27/17.
//

#ifndef _MUSICGAMESCENE_H
#define _MUSICGAMESCENE_H

#include "cocos2d.h"

class MusicGameScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    CREATE_FUNC(MusicGameScene);
};

#endif
