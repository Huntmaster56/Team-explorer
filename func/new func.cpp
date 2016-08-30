#include <iostream>
#include <cstdlib>
#include <time.h>
/*
int SmallLarge(float a, float b)
{
	if (a < b)
		printf("")
}
*/


// Q# 1 
//Answer 1 1 2 2 3 2 1


/* Q# 2

float SmallLarage(float a, float b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


int main()
{
	float a;
	float b;
	printf("please enter two decimals to find the smaller: \n");
	scanf_s("%f %f", &a, &b);
	getchar();

	float smaller = SmallLarage(a, b);

	printf("The smaller of the two is: %f", smaller);

	getchar();
}
*/

/*
float SmallLarage(float a, float b, float c)
{
	if ((a < b) && (a < c))
	{
		return a;
	}
	else if ((b < c) && (b < a))
	{
		return b;
	}
	else if ((c < b) && (c < a))
	{
		return c;
	}
}


int main()
{
	float a;
	float b;
	float c;
	printf("please enter three decimals to find the smaller: \n");
	scanf_s("%f %f %f", &a, &b, &c);
	getchar();

	float smaller = SmallLarage(a, b, c);

	printf("The smaller of the three is: %f", smaller);

	getchar();
	system("pause");
}
*/


int randRange(int start, int end)
{
	srand(time(0));
	return rand() % (end - start + 1) + start;
}



int solveBattle(int playermove, int computer)
{
	if (playermove == computer)
	{
		return 0;
	}
	if (playermove = 1, computer = 2)
	{
		return -1;
	}
	if (playermove = 2, computer = 2)
	{
		return -1;
	}
	if (playermove = 3, computer = 2)
	{
		return -1;
	}
	if (playermove = 1, computer = 2)
	{
		return -1;
	}
	if (playermove = 2, computer = 2)
	{
		return -1;
	}
	if (playermove = 3, computer = 2)
	{
		return -1;
	}











}
//int solveBattle(int player, int computer);
//void printAction(int action);
//int inputAction();

int main()
{
	int PlayerMove;
	printf("Your playing rock paper scissers against a cpu, /n enter a number between 1-3, 1 is rock, 2 is paper, 3 is scissers.");
	scanf_s("%d", &PlayerMove);
	getchar();


//	int computer = randRange;
}




