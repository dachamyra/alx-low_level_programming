#include "main.h"

/**
 * strcat - function that concatenates two strings
 * @src: the string to be appended
 * @dest: A pointer to the string to be concatenated
 *
 * Return: A pointer to the destination string @dest
 */
char *strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
