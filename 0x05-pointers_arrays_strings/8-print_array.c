#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 *
 * @a: a parametre
 * @n: n parametre
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
