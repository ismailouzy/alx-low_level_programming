#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: a pointer to the array
 * @n: the number of element in the array
 */

void reverse_array(int *a, int n)
{
	int first, last = n - 1, temp = 0;

	for (first = 0; first <= last; first++)
	{
		temp = a[first];
		a[first] = a[last];
		a[last] = temp;
		last--;
	}
}
