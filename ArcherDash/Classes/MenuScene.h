#pragma once

#include "cocos2d.h"
#include "HelpScene.h"

class MenuScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();

	void playGame();

	CREATE_FUNC(MenuScene);

};