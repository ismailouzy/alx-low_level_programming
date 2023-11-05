#include <stdio.h>
#include "dog.h"

/**
 * print_dog - entry
 * @d: d parametre
 */

void print_dog(struct dog *d)
{
	if (d != 0)

	{
		printf("Name: ");
		if (d->name != 0)

			printf("%s\n", d->name);
		else
		{
			printf("(nil)\n");
		}
		printf("Age: %f\n", d->age);

		printf("Owner: ");
		if (d->owner != 0)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");

	}

}
