#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - function that finds the length of a string
 * @str: string to be measured
 *
 * Return: String length
 */
int _strlen(char *str)
	int len;
{
	while (*str++)
		len++;

	return (len);
}
/**
 * *_strcpy - function that copies a string pointed to by src, including the
 * terminating null byte to a buffer pinted to by dest
 * @dest: the buffer storing thr string copy
 * @src: the source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * *new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog = malloc(sizeof(char) * (_strlen(name) + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->owner =  malloc(sizeof(char) * (_strlen(owner) + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	n_dog->name = _strcpy(n_dog->name, name);
	n_dog->age = age;
	n_dog->owner = _strcpy(n_dog->owner, owner);

	return (n_dog);
}
