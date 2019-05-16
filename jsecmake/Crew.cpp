
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



//����ְҵ
void Crew::set_position(int position_index)
{
	// �⽻����
	diplomacy_ability=0;
	// ��������
	trading_ability=0;
	// ����Ч��
	travel_efficiency=0;
	// ��������
	combat_maneuvers=0;
	// ��������
	conflict_evasion=0;
	// ��������
	defensive_performance=0;
	// �ָ�����
	systems_recovery=0;
	// �ɿ�����
	mining_ability=0;
	// ս������
	offensive_performance=0;
	switch (position_index)
	{
	case 0:
		//Captain (����)
		position = "Captain";
		diplomacy_ability = random(50) + 50;
		trading_ability = random(50) + 50;
		break;
	case 1:
		//Pilot (��ʻԱ)
		position = "Pilot";
		travel_efficiency = random(20) + 30;
		combat_maneuvers = random(20) + 30;
		conflict_evasion = random(20) + 30;
		break;
	case 2:
		//Engineer (����ʦ)
		position = "Engineer";
		travel_efficiency = random(20) + 30;
		combat_maneuvers = random(20) + 30;
		conflict_evasion = random(20) + 30;
		defensive_performance = random(20) + 30;
		systems_recovery = random(20) + 30;
		break;
	case 3:
		//Miner (��)
		position = "Miner";
		mining_ability = random(20) + 30;
		break;
	case 4:
		//warrior (սʿ)
		position = "Warrior";
		offensive_performance = random(50) + 50;
		defensive_performance = random(20) + 30;
		break;
	default:
		break;
	}
	//cout << position_index << endl;
}
