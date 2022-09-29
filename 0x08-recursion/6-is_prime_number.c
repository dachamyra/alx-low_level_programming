#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks if number is divisible
 * @n: the integer to be used for the argument
 * Return: 1 if the input integer is a prime number, 0 otherwise
 */
	int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
