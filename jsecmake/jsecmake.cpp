// jsecmake.cpp: 定义应用程序的入口点。
//

#include "jsecmake.h"
#include "Crew.h"
#include "SpaceShip.h"
#include "Alien.h"
#include "TradingStation.h"
#include "time.h"
#define random(x) (rand()%x)

using namespace std;


int main()
{
	srand((unsigned int)(time(NULL)));
	SpaceShip spaceship;

	TradingStation tradingstation;
	int no_trading = random(5);
	for (int i = 0; i < 5; i++)
	{
		if (i == no_trading) {
			continue;
		}
		spaceship.trade(tradingstation.aliens[i]);
	}
	

	getchar();
	return 0;
}
