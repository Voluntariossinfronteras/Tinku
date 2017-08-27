#ifndef __SPLASH_SCENE_H__
#define __SPLASH_SCENE_H__

#include "cocos2d.h"

class SplashScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    CREATE_FUNC(SplashScene);
    virtual bool init();

    void updateTimer(float dt);

};

#endif
