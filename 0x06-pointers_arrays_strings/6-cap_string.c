#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to a string
 *
 * Return: a pointer to a string with capitalized words
 */

char *cap_string(char *s)
{
	char arr[] = {
		' ',
		'\t',
		'\n',
		',',
		';',
		'.',
		'!',
		'?',
		'\"',
		'(',
		')',
		'{',
		'}'
	};
	int i = 0, j = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == arr[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
		i++;
	}

	return (s);
}
