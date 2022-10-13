#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: Index of the first element for which cmp functionn does not return 0
 * if no element matches return -1
 * if size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
