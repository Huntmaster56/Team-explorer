#include <iostream>
using namespace std;


int main() 
{
	int exp;
	float base, expo = 1;
		cout << "Enter base and exponent with a space in between:  ";
		cin >> base >> exp;

		while (exp != 0) 
			{
				expo *= base;
				--exp;
			cout << "final answer = " << expo << "\n";
			}
	system("pause");
}






