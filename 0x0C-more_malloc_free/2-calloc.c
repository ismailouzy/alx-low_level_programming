#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array with calloc
 *
 * @nmemb: nmemb parametre
 * @size: size parametre
 *
 * Return: success.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;
	void *s;

	if (nmemb == 0 || size == 0)

		return (NULL);


	s = malloc(nmemb * size);

	if (s == 0)
	{
		return (NULL);
	}

	mem = (char *)s;
	for (i = 0; i < nmemb * size; i++)
	{
		mem[i] = 0;
	}

	return (s);
}
