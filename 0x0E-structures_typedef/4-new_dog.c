#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creating new dog
 *
 * @name: name parametre
 * @age: age parametre
 * @owner: owner parametre
 *
 * Return: success.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;

	dog_t *dawg = malloc(sizeof(struct dog));

	if (dawg == NULL)
	{
		return (NULL);
	}

	dawg->name = (char *)malloc(sizeof(struct dog));
	dawg->owner = (char *)malloc(sizeof(struct dog));

	if (dawg->name == NULL || dawg->owner == NULL)
	{
		free(dawg->name);
		free(dawg->owner);
		free(dawg);
		return (NULL);
	}


	i = 0;
	while (name[i] != '\0')
	{
		dawg->name[i] = name[i];
		i++;
	}
	dawg->name[i] = '\0';

	i = 0;
	while (owner[i] != '\0')
	{
		dawg->owner[i] = owner[i];
		i++;
	}
	dawg->owner[i] = '\0';

	dawg->age = age;

	return (dawg);
}

