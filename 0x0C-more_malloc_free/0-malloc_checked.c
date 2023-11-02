#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -  a function that allocates memory
 *
 * @b: b parametre
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == NULL)

		exit(98);

	return (a);
}
