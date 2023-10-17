#include "main.h"

/**
 * rev_string - Entry point
 *
 * @s: s parametre
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{

	int a, b, c = 0;
	char d;

	while (s[c] != '\0')
	{
		c++;
	}
	for (a = 0; a < c / 2; a++)
	{
		b = c - 1 - a;
		d = s[a];
		s[a] = s[b];
		s[b] = d;
	}


}

