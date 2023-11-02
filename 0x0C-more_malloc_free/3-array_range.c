#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 *
 * @min: min parametre
 * @max: max parametre
 *
 * Return: success.
 */

int *array_range(int min, int max)
{
	int *ptr, i, res;

	if (min > max)

		return (NULL);


	ptr = (int *)malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)

		return (NULL);

	res = max - min;

	for (i = 0; i <= res; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
