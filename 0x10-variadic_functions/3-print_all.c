#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_c - Function that prints a char
 * @c: char to print
 *
 * Return: nothing
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 *print_i - Function that prints an integer
 *@i: Integer to print
 *
 * Return: nothing
 */

void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_s - Function that prints a string
 * @s: string to print
 *
 * Return: nothing
 */

void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_f - Function that prints a float
 * @f: The float to print
 *
 * Return: nothing
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - Function that prints anything
 * @format: List of types of arguments passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
