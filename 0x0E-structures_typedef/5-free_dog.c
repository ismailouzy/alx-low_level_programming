#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - freeing the dogs
 *
 * @d: d parametre
 *
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
