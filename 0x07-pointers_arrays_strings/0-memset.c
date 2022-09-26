#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * Return: A pointer to the memory area s
 * @n: number of bytes to be used
 * @s:address to the memory block
 * @b: constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
