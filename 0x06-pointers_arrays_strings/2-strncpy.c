#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: first parameter
 * @src: seconf parameter
 * @n: third parameter
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
