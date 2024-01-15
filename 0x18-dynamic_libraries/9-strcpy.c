#include "main.h"

/**
 * _strcpy - Entry point
 *
 * @dest: dest parametre
 * @src: src parametre
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while ((dest[a] = src[a]) != '\0')
	{
		a++;
	}

	return (dest);
}
