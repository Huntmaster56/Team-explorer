/*
1.) sts

2.) ?

3.) D

4.) you can't double a char

5.) 



*/
#include <iostream>

void main()
{
	int    var = 2147483500;
	float far = var;

	printf("%f\n", far);

	far = *(float*)&var;

	printf("%f\n", far);

	getchar();
}