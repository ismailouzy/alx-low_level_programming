#include <stdio.h>
#include "main.h"

/**
 * cap_string - Entry point
 *
 * @s: s parametre
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i;
	char e = ' ';

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '\t')
		{
			s[i] = ' ';
		}

		if (e == ' ' ||
				e == '\t' ||
				e == '"' ||
				e == ',' ||
				e == ';' ||
				e == '!' ||
				e == '?' ||
				e == ')' ||
				e == '(' ||
				e == '{' ||
				e == '}' ||
				e == '\n' || e == '.' || i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}

		e = s[i];
	}

	return (s);
}
