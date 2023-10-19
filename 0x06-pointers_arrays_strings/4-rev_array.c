#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry point
 *
 * @a: a parametre
 * @n: n parametre
 *
 * Return:
 */


void reverse_array(int *a, int n)
{

	int i;
	int b;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
