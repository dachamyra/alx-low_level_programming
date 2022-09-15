#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function to check for a digit
 * @c: int used for the argument
 * Return: 1 if it is, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && ( c <= 57))
	{
		return (1);
	}

	return (0);
}
