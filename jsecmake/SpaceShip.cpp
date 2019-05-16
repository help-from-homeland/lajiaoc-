#include <iostream>
#include <string>
#include "SpaceShip.h"
#include "Alien.h"
#define random(x) (rand()%x)
using namespace std;


SpaceShip::SpaceShip()
{
	name = "warthog";
	combat_aptitude = 0;
	mining_efficiency = 0;
	travel_efficiency = 0;
	speed = 50;
	cargo_capacity = 70;

	foods = 100;
	fuel = 100;
	money = 100;

	init();
}


SpaceShip::~SpaceShip()
{
}



void SpaceShip::init()
{
	cout << "The spaceship is Warthog." << endl;

	for (int i = 0; i < 100; i++) {
		Crew crew;
		crew.set_position(random(5));
		crews[i] = crew;
	}
	calculate_crew();

	for (int i = 0; i < 5; i++)
	{
		officer[i].set_position(i);
		officer[i].name = "boos";
		officer[i].age = random(20) + 20;
		cout << "officer:" << endl;
		cout << "	name:" << officer[i].name << endl;
		cout << "	age:" << officer[i].age << endl;
		cout << "	position:" << officer[i].position << endl;
	}


}

void SpaceShip::calculate_crew() {
	int len = sizeof(crews) / sizeof(crews[0]); //船员数组长度
	int captain = 0, pilot = 0, enginner = 0, miner = 0, warrior = 0;
	for (int i = 0; i < len; i++) {
		if (crews[i].position == "Captain") {
			captain++;
		}
		else if (crews[i].position == "Pilot") {
			pilot++;
		}
		else if (crews[i].position == "Engineer") {
			enginner++;
		}
		else if (crews[i].position == "Miner") {
			miner++;
		}
		else if (crews[i].position == "Warrior") {
			warrior++;
		}

	}
	cout << "captain:" << captain << endl;
	cout << "pilot:" << pilot << endl;
	cout << "enginner:" << enginner << endl;
	cout << "miner:" << miner << endl;
	cout << "warrior:" << warrior << endl;
}

void  SpaceShip::trade(Alien alien) {
	cout << "Start trading with " << alien.species << endl;

	if (alien.species == "species1") {
		cout << alien.species << " no trading." << endl;
		return;
	}

	if (random(2) == 0) {
		//钱换资源
		int num = random(15);
		if (random(2) == 0) {
			//买燃料
			if (alien.fuel < num) {
				num = alien.fuel;
			}
			fuel += num;
			alien.fuel -= num;
			money = money - num;
			cout << "money:" << money << "(-" << num << "),fuel:" << fuel << "(+" << num << ")" << endl;
		}
		else {
			//买食物
			if (alien.foods < num) {
				num = alien.foods;
			}
			foods += num;
			alien.foods -= num;
			money = money - num;
			cout << "money:" << money << "(-" << num << "),foods:" << foods << "(+" << num << ")" << endl;
		}
	}
	else {
		//资源换钱
		int num = random(15);
		if (random(2) == 0) {
			//燃料换钱
			if (alien.money < num) {
				num = alien.money;
			}
			fuel -= num;
			alien.fuel += num;
			money = money + num;
			cout << "money:" << money << "(+" << num << "),fuel:" << fuel << "(-" << num << ")" << endl;

		}
		else {
			//食物换钱
			if (alien.money < num) {
				num = alien.money;
			}
			foods -= num;
			alien.foods += num;
			money = money + num;
			cout << "money:" << money << "(+" << num << "),fuel:" << foods << "(-" << num << ")" << endl;
		}

	}
}