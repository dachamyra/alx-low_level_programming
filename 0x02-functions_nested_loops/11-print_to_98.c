#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * in order separated by a comma and followed by a space
 * @n: the first number in the series
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)

			printf("%d, ", n--);

			printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
			printf("%d\n", n);
	}
}
