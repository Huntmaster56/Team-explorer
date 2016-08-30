#include <iostream>
/*
struct point
{
	float x, y;
};



struct player
{
	char name;
	float health = 100;
	int score;
	point position;
	float velocity = 0;
};



struct rectangle
{
	point points[4];
};
*/


struct player
{
	char name[7];
};



int main()
{
	char playerName[7] = { 0 };

	player bob;

	printf("please insert player name of seven character\n");
	scanf_s("%s", bob.name, 7);
	getchar();

	printf("%s", bob.name);
	getchar();
}