#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: a parametre
 * @b: b parametre
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;

	*a = *b;

	*b = n;
}

