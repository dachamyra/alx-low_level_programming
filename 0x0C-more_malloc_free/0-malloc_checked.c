#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: memory to allocate
 * Return: a pointer to the allocated memory
 * if malloc fails, the malloc_checked should terminate with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
