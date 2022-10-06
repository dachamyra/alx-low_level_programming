#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: first integer
 * @max: last integer
 * Return: pointer to newly created array
 * if min > max return NULL
 * if malloc fails return NULL
 */
int *array_range(int min, int max)
{
	int i, j = min;
	int *a;

	if (min > max)
		return (0);
	a = malloc((max - min + 1) * sizeof(int));

	if (!a)
		return (0);
	while (i <= max - min)
		a[i++] = j++;
	return (a);
}
