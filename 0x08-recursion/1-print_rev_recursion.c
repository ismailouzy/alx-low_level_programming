#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Entry point
 *
 * @s: s parametre
 *
 * Return: s
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}

}
