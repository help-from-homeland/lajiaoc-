#pragma once
#include "SpaceShip.h"
#include "Alien.h"
using namespace std;

class Warthog :
	public SpaceShip
{
public:
	// 所载船员
	Crew crews[100];
	// 领队
	Crew officer[5];

	//食物
	int foods;
	//燃料
	int fuel;
	//金钱
	int money;

	Warthog();
	~Warthog();

	void init();
	//统计船员
	void calculate_crew();

	void trade(Alien alien);
};

