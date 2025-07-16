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
	if (s1 == s2)
		return (0);
	return (*s1 - *s2);
}
