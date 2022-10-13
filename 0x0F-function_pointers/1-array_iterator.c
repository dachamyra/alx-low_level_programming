#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element
 * @array:array
 * @size: size of the array
 * @action: pointer to the function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (!array || !action)
		return;
	for (index = 0; index < size; index++)
		action(array[index]);
}
