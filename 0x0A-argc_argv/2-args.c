#include <stdio.h>
/**
 * main - function that prints all arguments it recieves
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 * Return: Always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
