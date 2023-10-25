#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * @s: s parametre
 *
 * Return: s
 */

int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s == '\0')
	{

		return (0);
	}

	str = 1 + _strlen_recursion(s + 1);

	return (str);
}
