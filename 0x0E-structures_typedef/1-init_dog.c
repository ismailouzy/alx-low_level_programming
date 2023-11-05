#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - entry
 * @d: d parametre
 * @name: name parametre
 * @age: age parametre
 * @owner: owner parametre
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
