#include "main.h"

/**
 * _strcpy - strcpy implementation (copies a string to a buffer)
 * @dest: the pointer to the buffer
 * @src: the pointer to the string to copy
 *
 * Return: the pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}


	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
