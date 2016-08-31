#pragma once




#include <iostream>



struct dino
{
	char name[80];
	int health = 300;
	//	int height = 35;
	int weight = 0;
	//	int LazerDamage = 35;

};









dino makeDino()
{
	dino Dino;
	//	int name;
	scanf_s("%s %d", Dino.name, 80, &Dino.weight);
	getchar();
	return Dino;
}


void growDino(dino &Dino)
{
	Dino.weight += 10;

}



void printDino(dino Dino)
{
	printf("your dinos name is: %s \n His wieght is: %d \n", Dino.name, Dino.weight);
	getchar();
}




































