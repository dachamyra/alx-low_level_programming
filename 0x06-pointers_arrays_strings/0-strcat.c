#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: first param
 * @src: second param
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
