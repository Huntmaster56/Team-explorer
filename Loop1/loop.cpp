/*#include <iostream>


int main()
{
	for (int i = 0; i < 100; ++i)
	{
		printf("%d \n", i);
	}
	getchar();
}
*/

/*#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz!\n");
		}
		else if (i % 3 == 0)
		{
			printf("Buzz!\n");
		}
		else if (i % 5 == 0)
		{
			printf("Fizz!\n");
		}
		else
			cout << i << endl;
	}
	system("pause");
}*/

#include <iostream>


int main()
{
	for (int i = 0; i <= 100; ++i)
	{
		if (!(i % 3 == 0 || i % 5 == 0))
			printf("%d ", i);

		if (i != 0)
		{
			if (i % 3 == 0)printf("fizz");
			if (i % 5 == 0)printf("buzz");
		}

		printf("\n");
	}

	getchar();
}
