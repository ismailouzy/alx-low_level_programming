#include <stdio.h>
#include "main.h"

/**
 * _strncat - Entry point
 *
 * @dest: dest parametre
 * @src: src parametre
 * @n: n parametre
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int i;

	while (dest[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}

	dest[a + i] = '\0';

	return (dest);
}
