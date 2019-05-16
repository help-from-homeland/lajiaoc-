
#include "Crew.h"
#include <iostream>
#include <stdlib.h>
#define random(x) (rand()%x)

using namespace std;

Crew::Crew()
{
	
}


Crew::~Crew()
{
}



//设置职业
void Crew::set_position(int position_index)
{
	// 外交能力
	diplomacy_ability=0;
	// 交易能力
	trading_ability=0;
	// 航行效率
	travel_efficiency=0;
	// 操作能力
	combat_maneuvers=0;
	// 闪避能力
	conflict_evasion=0;
	// 防御能力
	defensive_performance=0;
	// 恢复能力
	systems_recovery=0;
	// 采矿能力
	mining_ability=0;
	// 战斗能力
	offensive_performance=0;
	switch (position_index)
	{
	case 0:
		//Captain (船长)
		position = "Captain";
		diplomacy_ability = random(50) + 50;
		trading_ability = random(50) + 50;
		break;
	case 1:
		//Pilot (驾驶员)
		position = "Pilot";
		travel_efficiency = random(20) + 30;
		combat_maneuvers = random(20) + 30;
		conflict_evasion = random(20) + 30;
		break;
	case 2:
		//Engineer (工程师)
		position = "Engineer";
		travel_efficiency = random(20) + 30;
		combat_maneuvers = random(20) + 30;
		conflict_evasion = random(20) + 30;
		defensive_performance = random(20) + 30;
		systems_recovery = random(20) + 30;
		break;
	case 3:
		//Miner (矿工)
		position = "Miner";
		mining_ability = random(20) + 30;
		break;
	case 4:
		//warrior (战士)
		position = "Warrior";
		offensive_performance = random(50) + 50;
		defensive_performance = random(20) + 30;
		break;
	default:
		break;
	}
	//cout << position_index << endl;
}
