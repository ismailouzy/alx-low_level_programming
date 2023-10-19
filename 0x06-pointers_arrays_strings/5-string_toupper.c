#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry point
 *
 * @a: a parametre
 *
 * Return: a
 */


char *string_toupper(char *a)
{

	int n;

	for (n = 0; a[n] != '\0'; n++)

		if (a[n] >= 'a' && a[n] <= 'z')
		{
			a[n] = a[n] - 32;
		}
	return (a);

}
