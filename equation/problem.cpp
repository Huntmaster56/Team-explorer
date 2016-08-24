#include <iostream>



int main()
{
	
int x = 0;
int y;

y = (x == 0) ? 0 : (10 / x);

int num1, num2, num3;
char op = '+';

sscanf_s("%d %c %d", &num1, &op, 1, &num2);
printf("\n");

switch (op)
{
case '+':
	num3 = num1 + num2;
	printf("%d ", num3);
	break;
case '-':
	num3 = num1 - num2;
	printf("%d ", num3);
	break;
case '*':
	num3 = num1 * num2;
	printf("%d ", num3);
	break;
case '/':
	num3 = num1 / num2;
	printf("%d ", num3);
	break;
case '%':
	num3 = num1 % num2;
	printf("%d ", num3);
	break;
default:
	printf('error');


}

system("pause");


}