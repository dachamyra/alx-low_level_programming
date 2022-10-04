#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string
 * @str: string to be duplicated
 * Return: NULL if str is NULL
 * pointer to the duplicate string on sucess
 * NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	char *nstr;
	int i;
	int len;

	/*check if str is NULL*/
	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;

	nstr = malloc(sizeof(char) * (len + 1)); /*define values with malloc*/

	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';

	return (nstr);
}
