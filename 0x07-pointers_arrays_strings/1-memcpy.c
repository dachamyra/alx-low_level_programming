#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: number of bytes to be copied
 * @src: pointer to the source of data to be copied
 * @dest: pointer to the destination array where the content is to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	usigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
