#include "dinosaur.h"
int main()
{

	const int array_size = 2;

	dino Dino[array_size];




	printf("This is your dino please give him a name, also how much he should weigh: \t");

	dino Dino[array_size];
	for (int i = 0; i < array_size; ++i)
	{

		Dino[i] = makeDino();
		printDino(Dino[i]);
		growDino(Dino[i]);
		printDino(Dino[i]);
	}
	getchar();

}


















