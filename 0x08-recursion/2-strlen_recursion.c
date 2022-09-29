#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
