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
	int i, j ;
	int *arr;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
