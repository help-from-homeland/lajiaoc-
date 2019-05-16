#pragma once
#include <string>
#include "SpaceShip.h"
using namespace std;

class Alien
{
public:
	Alien();
	~Alien();

	//食物
	int foods;
	//燃料
	int fuel;
	//金钱
	int money;
	//种族
	string species;

	//战斗
	void battle();
	//交易
	void trade();
};
