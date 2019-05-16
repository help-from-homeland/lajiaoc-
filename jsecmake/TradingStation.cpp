#include "TradingStation.h"
#include <stdlib.h>
#include "time.h"
#include <string>
#include <iostream>
#define random(x) (rand()%x)

TradingStation::TradingStation() {

	cout << "\nMeet a new TardingStation." << endl;
	string species[5] = { "species1", "species2", "species3", "species4", "species5" };

	for (int i = 0; i < 5; i++)
	{
		aliens[i].species = species[i];
		aliens[i].foods = random(50) + 20;
		aliens[i].fuel = random(50) + 20;
		aliens[i].money = random(50) + 20;
		cout <<"alien:"<< aliens[i].species << endl;
		cout << "	foods:" << aliens[i].foods << endl;
		cout << "	fuel:" << aliens[i].fuel << endl;
		cout << "	money:" << aliens[i].money << endl;
	}
}

TradingStation::~TradingStation() {

}