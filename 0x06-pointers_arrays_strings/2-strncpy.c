#include "main.h"

/**
 * _strncpy - copies from a string
 * @dest: pointer to the string destination
 * @src: the string to be copied
 * @n: the number of bytes in src
 *
 * Return: a copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
