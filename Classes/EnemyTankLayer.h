#pragma once
#include "cocos2d.h"
USING_NS_CC;

#define EnemyMaxCount 30

class EnemyTankLayer :
	public Layer
{
public:
	EnemyTankLayer(void);
	virtual ~EnemyTankLayer(void);
public:
	int _enemyCurrenCount;
	int _enemy1RemainCount;	// �����Բ����л�1���͵�����
	int _enemy2RemainCount;	// 
	int _enemy3RemainCount;
	int _enemy4RemainCount;
};
