#include <stdio.h>
#include "main.h"


/**
 * _strspn - strspn function
 *
 * @s: s parametre
 * @accept: accept parametre
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	int i, found;

	while (*s != '\0')
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[0] == accept[i])
			{
				found = 1;
				break;

			}
		}

		if (!found)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
