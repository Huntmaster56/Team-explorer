#include <iostream>

// right click solution -> add -> new project
	//name it swapper

// right click swapper -> set as startup project
	//add -> new source file


int main()
{
	int varA = 0, varB = 0, varC = 0;
	//printf("Var currently stores: %d \n", var);
	printf("insert two integers: ");
	scanf_s("%d %d", &varA, &varB);
	getchar();
	//printf("var currently stores: %d \n", var);
	printf("A: %d, B: %d \n", varA, varB);

	printf("swap successful! (well, probably)\n");
	printf("A: %d, B: %d \n", varA, varB);

	varA = varB;
	varB = varA;
	varC = varA;
	printf("%d %d", &varA, &varB);


	getchar();
}