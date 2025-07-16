#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: 0 if strings are equals,
 * positive value if s1 is bigger than s2,
 * negative if s1 is lesser.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, value = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			value = s1[i] - s2[i];
			break;
		}
		i++;
	}
	if (s1 == s2)
		return (0);
	return (value);
}
