#pragma once
#include "SpaceShip.h"
#include "Alien.h"
using namespace std;

class Warthog :
	public SpaceShip
{
public:
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

	Warthog();
	~Warthog();

	void init();
	//ͳ�ƴ�Ա
	void calculate_crew();

	void trade(Alien alien);
};

