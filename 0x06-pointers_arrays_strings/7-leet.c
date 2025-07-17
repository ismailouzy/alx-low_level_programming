#include "main.h"

/**
 * leet - encondes a string into 1337
 * @s: pointer to a string
 *
 * Return: a pointer to an encoded string
 */

char *leet(char *s)
{
	int j, i = 0;
	char numbers[] = {
		'4',
		'4',
		'3',
		'3',
		'0',
		'0',
		'7',
		'7',
		'1',
		'1',
	};
	char letters[] = {
		'a',
		'A',
		'e',
		'E',
		'o',
		'O',
		't',
		'T',
		'l',
		'L',
	};

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
