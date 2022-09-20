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

	while (*(str + 1) != '\0')
	{
		putchar(* (str + i));

		i++;
	}
	putchar(10);
}
