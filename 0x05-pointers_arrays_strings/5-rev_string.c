#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j < i)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		j++;
		i--;


	}
}
