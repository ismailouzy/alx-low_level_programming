#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: the pointer to the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
