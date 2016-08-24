#include <iostream>


int main()
{
	//system("color fd");
	printf("Enter two letters: ");
	char charA, charB, charC;
	scanf_s(" %c %c", &charA, 1, &charB, 1);
	int asciival = charA;
	int asciival2 = charB;

	int asciival3 = ((asciival + asciival2) / 2);
	charC = asciival3;
	printf("average letter is %c\n", charC);




	system("pause");



}