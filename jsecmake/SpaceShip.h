#pragma once
#include <string>
#include "Alien.h"
#include "Crew.h"
using namespace std;

class SpaceShip
{

public:
	SpaceShip();
	~SpaceShip();
	string name;
	// 货物容量
	int cargo_capacity;
	// 战斗能力
	int combat_aptitude;
	// 采矿效率
	int mining_efficiency;
	// 航行效率
	int travel_efficiency;
	// 航行速率
	int speed;

	// 所载船员
	//Crew crews[100];
	// 领队
	Crew officer[5];
	
	int captain_num = 0;
	int  pilot_num = 0;
	int engineer_num = 0;
	int miner_num = 0;
	int warrior_num = 0;
	//食物
	int foods;
	//燃料
	int fuel;
	//金钱
	int money;

	void init();
	//统计船员
	void calculate_crew();

	void trade(Alien alien);
};

