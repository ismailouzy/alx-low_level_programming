#include <stdio.h>
#include "main.h"

/**
 * _strchr - strch function
 *
 * @s: s parametre
 * @c: c parametre
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);

}
