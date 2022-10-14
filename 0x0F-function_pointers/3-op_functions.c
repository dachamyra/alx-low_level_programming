#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculates the product of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculates a divided by b
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the division a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that prints the remainder of division a by b
 * @a: The first integer
 * @b: The second integer
 * Return: the remainder of the division a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
