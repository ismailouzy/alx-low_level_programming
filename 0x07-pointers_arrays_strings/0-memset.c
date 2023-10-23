#include <stdio.h>
#include "main.h"

/**
 * _memset - memset function
 *
 * @s: s parametre
 * @b: b parametre
 * @n: n parametre
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (n--)
	{
		*s = b;

		s++;
	}
	return (s);
}