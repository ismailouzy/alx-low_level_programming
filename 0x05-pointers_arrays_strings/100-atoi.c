#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string into an integer
 * @s: a pointer to the string
 *
 * Return: an integer.
 */

int _atoi(char *s)
{
	int i, num = 0, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
			num = num * 10 + (int)s[i] - 48;
		else if (s[i] == 45)
			sign = sign * (-1);
		else if (s[i] == 43)
			sign = sign * (+1);
		else if (s[i - 1] >= 48 && s[i - 1] <= 57 && (s[i] > 57 || s[i] < 48))
			break;
	}

	return (num * sign);
}
