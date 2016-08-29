#include <iostream>


int main()
{



	int high = 0;
	int low = 1000;
	int num[10];

	scanf_s("%d %d %d %d %d %d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);

	for (int i = 0; i < 10; i++)
	{
		if (num[i] > high)
		{
			high = num[i];

		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (num[i] < low)
		{
			low = num[i];

		}
	}

	printf("%d %d \n", high, low);


	system("pause");

}






/*
1) 
	1 - v
	2 - v
	3 - i cant have decimals
	4 - i cant have blanks
	5 - i didn't specify value
	6 - i 
	7 - v
	8 - i cant have a negative value
	9 - v




	int varA = 0, varB = 0, varC = 0, varD = 0, varE = 0;
	printf("The biggest and smallest number will be displayed on screen.\n");
	printf("Insert five seperated numbers and hit enter");
	scanf_s("%d %d %d %d %d", &varA, &varB, &varC, &varD, &varE);
	getchar();

	if ((varA < varB) )
	{
		int tswap = varA;
		varA = varB;
		varB = tswap;
	}
	printf("%d >= %d", varA, varB);


*/