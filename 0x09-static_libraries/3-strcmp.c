#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Entry point
 *
 * @s1: s1 parametre
 * @s2: s2 parametre
 *
 * Return: s1 - s2
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
