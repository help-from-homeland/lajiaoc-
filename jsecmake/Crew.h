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

	// �⽻����
	int diplomacy_ability;
	// ��������
	int trading_ability;
	// ����Ч��
	int travel_efficiency;
	// ��������
	int combat_maneuvers;
	// ��������
	int conflict_evasion;
	// ��������
	int defensive_performance;
	// �ָ�����
	int systems_recovery;
	// �ɿ�����
	int mining_ability;
	// ս������
	int offensive_performance;
	void set_position(int position_index);
};

