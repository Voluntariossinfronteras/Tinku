//
// Created by Erick Silva on 8/26/17.
//

#ifndef _MUSICWORLDSCENE_H_
#define _MUSICWORLDSCENE_H_

#include "cocos2d.h"

class MusicWorldScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    CREATE_FUNC(MusicWorldScene);

    void btnPlayCallback(cocos2d::Ref *ref);
};



#endif