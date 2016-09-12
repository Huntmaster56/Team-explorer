#include "GameState.h"
#include <iostream>
void GameState::init()
{
	zombies[0].init("Sally", "Librarian");
	zombies[1].init("Milly", "Butcher");
	zombies[2].init("Sam", "Tailor");
	zombies[3].init("Spot", "T-rex");

}

void GameState::start()
{
	printf("The contestants are:\n");
	drawStatus();
	printf("\nLet the battle begin! Who will emerge victorious!\n");
}

void GameState::drawStatus() const
{
	for (int i = 0; i < Z_COUNT; ++i)
		zombies[i].draw(true);
}

void GameState::drawRound() const
{
	printf("Combat Round: \n");
	for (int i = 0; i < Z_COUNT; ++i)
		zombies[i].draw(true);
}

bool GameState::isGameOver() const
{
	int livingZombies = 0;
	for (int i = 0; i < Z_COUNT; ++i)
		if (zombies[i].isAlive())
			livingZombies++;

	return livingZombies == 1;
}