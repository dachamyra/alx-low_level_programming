#include "main.h"

/**
 * *create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: character to be used for the argument
 * Return: Null if size is zero or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (Null);
	array = malloc(sizeof(char) * size);

	if (array == Null)
		return (Null);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
