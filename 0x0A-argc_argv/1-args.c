#include <stdio.h>

/**
 * main - function that prints the number of arguments passed to it
 * @argc: the number of command line arguments
 * @argv: array containing the command line arguments
 * Return: Always 0 (sucess)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
