#include <iostream>

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