#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - exec a func. given as a parameter on each elem. of an array
 *
 * @array: array ptr parametre
 * @size: size parametre
 * @action: action function parametre
 *
 * Return: success.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
