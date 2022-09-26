#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: character to check for
 * @s: string th check
 *
 * Return: pointer to character c in string s 0r null if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
