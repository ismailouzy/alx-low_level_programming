#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 *
 * @array: array ptr parametre
 * @size: size parametre
 * @cmp: action function parametre
 *
 * Return: success.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);

		}
	}
	return (-1);
}
