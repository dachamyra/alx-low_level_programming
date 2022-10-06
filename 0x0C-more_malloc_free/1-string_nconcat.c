#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string to be appended
 * @s2: string to append
 * @n: memory to allocate
 * Return: pointer containing s1 followed by n bytes of s2
 * if function fails it should return NULL
 * if n is greater or equal to the length of s2 use the entire s2 string
 * if NULL is passed treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
