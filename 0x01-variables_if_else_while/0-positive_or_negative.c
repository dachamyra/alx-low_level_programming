#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - print if number is positive, zero, or negative
*Description: print using the printf function
*this progam prints out "If the number is positive, zero, or negative"
Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
{
	printif("%i is positive\n", n);
}
	else if (n==0)
{
	printif("%i is zero\n", n);
}
	else if (n < 0)
{
	printif("%i is negative\n", n);
}
	return (0);
}
