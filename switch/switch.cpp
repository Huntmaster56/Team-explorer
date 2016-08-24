#include <iostream>

int main()
{
	int decision = 0;
	scanf_s("%d", &decision);
	switch (decision)
	{
	case 1:
		std::cout << "1\n";
		break;
	case 2:
		std::cout << "2 or 3\n";
		break;
	case 3:
		std::cout << "4\n";
		break;
	default:
		std::cout << "Invalid \n";
		break;
	}
	system("pause");
}