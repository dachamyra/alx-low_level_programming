#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string to be checked
 * @accept: string to be checked agaist
 * Return: pointer to the byte in s that matches or null if it does not match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accepte[j])
			return (s + i);
	}
	return (0);
}
