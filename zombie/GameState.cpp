#include "GameState.h"
#include <iostream>
//void GameState::init()
//{
//	zombies[0].init("Sally", "Librarian");
//	zombies[1].init("Milly", "Butcher");
//	zombies[2].init("Sam", "Tailor");
//	zombies[3].init("Spot", "T-rex");
//}
const char __occupations[10][64]
= { "Dinosaur", "Librarain", "Butcher","Tailor", "Cobbler", "Mathematician","Programmer", "Teacher", "Chef", "Director" };

const char __names[15][64]
= { "Sally", "Milly", "Max","Sam", "Regina", "Tommy","Terry", "Fragilly", "Alex", "James","OH","THESE","NAMES","CREATIVITY","FAILING" };

void GameState::init()
{
	for (int i = 0; i < Z_COUNT; ++i)
		zombies[i].init(__names[rand() % 15],
			__occupations[rand() % 10]);
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
	printf("-----Combat Round----- \n");
	for (int i = 0; i < Z_COUNT; ++i)
		zombies[i].draw(true);
}

void GameState::update()
{
	for (int i = 0; i < Z_COUNT; ++i)
		if (zombies[i].isAlive())
			zombies[rand() % Z_COUNT].takeDamage(zombies[i].rollAttack());

}

bool GameState::isGameOver() const
{
	int livingZombies = 0;
	for (int i = 0; i < Z_COUNT; ++i)
		if (zombies[i].isAlive())
			livingZombies++;

	return livingZombies == 1;
}

void GameState::drawWinner() const
{
	printf("\n\n##### The battle is over!! #####\n");
	for (int i = 0; i < Z_COUNT; ++i)
		if (zombies[i].isAlive())
			zombies[i].draw(false);

	printf("The victor has emerged!");
}