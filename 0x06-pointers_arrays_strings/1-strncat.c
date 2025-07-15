#include "main.h"

/**
 * _strncat - concatenates two string with n bytes
 * @dest: pointer to first string
 * @src: pointer to the second string
 * @n: the number of bytes
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i + 1] = '\0';

	return (dest);
}
