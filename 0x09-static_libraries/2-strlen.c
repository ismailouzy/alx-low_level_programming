#include <stdio.h>
#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s: s parametre
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}

	return (n);

}
