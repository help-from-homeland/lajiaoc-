#pragma once
#include <string>
#include "SpaceShip.h"
using namespace std;

class Alien
{
public:
	Alien();
	~Alien();

	//ʳ��
	int foods;
	//ȼ��
	int fuel;
	//��Ǯ
	int money;
	//����
	string species;

	//ս��
	void battle();
	//����
	void trade();
};
