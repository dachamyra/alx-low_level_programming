#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to check
 * @accept: string to check against
 * Return: the number of bytes of s consisting of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
