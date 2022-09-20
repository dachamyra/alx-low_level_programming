#include "main.h"

/**
 * _puts - function that prints a string followed by a new line to stdout
 * @str: string to print
 *
 * Description: prints a srting
 * Return: Always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));

		i++;
	}
	_putchar(10);
}
