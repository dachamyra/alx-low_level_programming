#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print the minimum number of coins
 * @argc: number of arguments on the command line
 * @argv: array containing the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0, num, j;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			num -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
