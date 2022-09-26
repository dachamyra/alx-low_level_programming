#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string to be checked
 * @accept: string to be checked agaist
 * Return: pointer to the byte in s that matches or null if it does not match
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			return (s);
		}
	s++;
	}

	return ('\0');
}
