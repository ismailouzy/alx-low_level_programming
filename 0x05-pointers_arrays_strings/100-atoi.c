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
	int i, num = 0, sign = 1, number_started = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (num > (2147483647 - (s[i] - 48)) / 10)
			{
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}
			num = num * 10 + (int)s[i] - 48;
			number_started = 1;
		}
		else if (number_started == 1)
			break;
		else if (s[i] == 45)
			sign *= -1;
		else if (s[i] == 43)
			continue;
	}

	return (num * sign);
}
