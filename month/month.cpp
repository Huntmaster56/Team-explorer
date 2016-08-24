#include <iostream>


int main()
{
	int month;

	printf("Enter a number between 1-12 for the month that corasponds to that number.\n");
	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
		printf("There are 31 days in January \n");
		break;
	case 2:
		printf("There are 29 days in Febuary \n");
		break;
	case 3:
		printf("There are 31 days in March \n");
		break;

	case 4:
		printf("There are 30 days in April \n");
		break;
	case 5:
		printf("There are 31 days in May \n");
		break;
	case 6:
		printf("There are 30 days in June \n");
		break;
	case 7:
		printf("There are 31 days in July \n");
		break;
	case 8:
		printf("There are 31 days in August \n");
		break;
	case 9:
		printf("There are 30 days in September \n");
		break;
	case 10:
		printf("There are 31 days in October \n");
		break;
	case 11:
		printf("There are 30 days in November \n");
		break;
	case 12:
		printf("There are 31 days in December \n");
		break;
	default:
		printf("Error \n");
	}

	system("pause");

}



//8
//T
//F
//F
//T
//T
//F
//T
//T
//T

//9
//T
//T
//F
//F
//F


