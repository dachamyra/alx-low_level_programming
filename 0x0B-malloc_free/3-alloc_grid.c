#include "main.h"
/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i = 0, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	p = (int **) malloc(sizeof(int *) * height);
	if (p != NULL)
	{
		for (; i < height; i++)

		{
			p[i] = (int *) malloc(sizeof(int) * width);
			if (p[i] != NULL)
			{
				for (j = 0; j < width; j++)
					p[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(p[i]);
					i--;
				}
				free(P);
				return (NULL);
			}
		}
		return (p);
	}
	else
	{
		return (NULL);
	}
}
