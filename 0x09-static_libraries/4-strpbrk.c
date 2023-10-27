#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - strspn function
 *
 * @s: s parametre
 * @accept: accept parametre
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{

			if (s[i] == accept[j])

				return (&s[i]);

		}
	}

	return (0);
}
