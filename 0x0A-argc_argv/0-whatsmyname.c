#include <stdio.h>

/**
 * main - function used to print its name
 * @argc: the number of command line arguments
 * @argv: array containing the command line arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
