#include <iostream>

int main()
{
	int varA = 0, varB = 0;
	printf("The larger number will be displayed on screen.\n");
	printf("Insert two seperated numbers and hit enter");
	scanf_s("%d %d", &varA, &varB);
	getchar();

	if (varA < varB)
	{
		int tswap = varA;
		varA = varB;
		varB = tswap;
	}
	printf("%d >= %d", varA, varB);
	getchar();
}