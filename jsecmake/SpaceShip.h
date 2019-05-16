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
	// ��������
	int cargo_capacity;
	// ս������
	int combat_aptitude;
	// �ɿ�Ч��
	int mining_efficiency;
	// ����Ч��
	int travel_efficiency;
	// ��������
	int speed;

	// ���ش�Ա
	Crew crews[100];
	// ���
	Crew officer[5];

	//ʳ��
	int foods;
	//ȼ��
	int fuel;
	//��Ǯ
	int money;

	void init();
	//ͳ�ƴ�Ա
	void calculate_crew();

	void trade(Alien alien);
};

