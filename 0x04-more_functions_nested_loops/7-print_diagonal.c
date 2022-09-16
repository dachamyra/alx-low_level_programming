#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function that prints a diagonal line
 * @n: parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	_putchar('\n');
}
