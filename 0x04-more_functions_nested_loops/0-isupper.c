#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character
 * @c: int used for the argument
 * Return: 1 if it is, 0 otherwise
 */
int _isupper(int c);
{
	if ((c >= 'A') && (c >= 'Z'))
	{
		return (1);
	}

	return (0);
}
