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

	for (i = 0; s[i]; i++)

	{
		if (s[i] == '\t')
		{

			s[i] = ' ';
		}
		if (i == 0)

		{

			if (s[i] >= 'a' && s[i] <= 'z')

			{
				s[i] = s[i] - 32;

			}

		}
		else if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '.')
		{


			if (s[i] >= 'a' && s[i] <= 'z')
			{ s[i] = s[i] - 32;
			}
		}

	}
	return (s);
}