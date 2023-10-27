#include <stdio.h>
#include "main.h"

/**
 * _memcpy - memset function
 *
 * @dest: dest parametre
 * @src: src parametre
 * @n: n parametre
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
