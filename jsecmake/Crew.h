#pragma once
#include <string>
using namespace std;

class Crew
{
public:
	Crew();
	~Crew();

	string name;
	int age;
	string position;

	// 外交能力
	int diplomacy_ability;
	// 交易能力
	int trading_ability;
	// 航行效率
	int travel_efficiency;
	// 操作能力
	int combat_maneuvers;
	// 闪避能力
	int conflict_evasion;
	// 防御能力
	int defensive_performance;
	// 恢复能力
	int systems_recovery;
	// 采矿能力
	int mining_ability;
	// 战斗能力
	int offensive_performance;
	void set_position(int position_index);
};

