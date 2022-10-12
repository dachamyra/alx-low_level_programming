#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - ffunction that frees dogs
 * @d: The dog being freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
