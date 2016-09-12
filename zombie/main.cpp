#include <cstdio>
#include "Header.h"
#include <cstdlib>
#include "GameState.h"
void main()
{
	//const int Z_COUNT = 4;
	//Zombie zombies[Z_COUNT];
	//zombies[0].init("Sally", "Librarian");
	//zombies[1].init("Milly", "Butcher");
	//zombies[2].init("Sam", "Tailor");
	//zombies[3].init("Spot", "T-rex");
	//printf("The contestants are:\n");
	//for (int i = 0; i < 4; ++i)
	//	zombies[i].draw(false);
	//printf("\nLet the battle begin! Who will emerge victorious!\n");
	//bool gameOver = false;
	//while (!gameOver)
	//{
	//	//printf("Combat Round: \n");
	//	for (int i = 0; i < Z_COUNT; ++i)
	//		if(zombies[i].isAlive())
	//			zombies[rand() % Z_COUNT].takeDamage(zombies[i].rollAttack());
	//	//for (int i = 0; i < Z_COUNT; ++i)
	//	//	zombies[i].draw(true);
	//	//int livingZombies = 0;
	//	//for (int i = 0; i < Z_COUNT; ++i)
	//	//	if (zombies[i].isAlive())
	//	//		livingZombies++;
	//	//gameOver = (livingZombies == 1);
	GameState gs;
	gs.init();

	gs.start();
	while (!gs.isGameOver())
	{
		gs.update();
		gs.drawRound();
	}
	
	


	getchar();
}