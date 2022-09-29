#include "main.h"
#include <stdio.h>

int find_sqrt(int num, int root);

int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of a given number
 * @num: The number
 * @root: The root to be tested
 *
 * Return: the squareroot if number has a natural squareroot, -1 if it does not
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: The number
 *
 * Return: the square root if the number has a natural square root, -1 if not
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
