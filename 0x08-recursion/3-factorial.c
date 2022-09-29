#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number
 * @n: the given number
 * Return: factorial of the given number
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
