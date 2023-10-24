#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - printing diagsums
 *
 * @a: a parametre
 * @size: size parametre
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, sumA = 0, sumB = 0;

	for (i = 0; i < size; i++)
	{
		sumA = sumA + a[i * size + i];
		sumB = sumB + a[i * size + size - 1 - i];
	}

	printf("%d, %d\n", sumA, sumB);
}
