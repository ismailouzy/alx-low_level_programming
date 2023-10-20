#include <stdio.h>
#include "main.h"

/**
 * leet - Entry point
 *
 * @s: s parametre
 *
 * Return: s
 */

char *leet(char *s)
{
	char a[] = "aeotl";
	char b[] = "43071";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a[j] || s[i] == a[j] - 32)
			{
				s[i] = b[j];
				break;
			}
		}
	}

	return (s);
}
