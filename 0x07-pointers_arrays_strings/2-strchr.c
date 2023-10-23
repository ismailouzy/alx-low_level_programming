#include <stdio.h>
#include "main.h"

/**
 * _strchr - memset function
 *
 * @s: s parametre
 * @c: c parametre
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return ('\0');
}
