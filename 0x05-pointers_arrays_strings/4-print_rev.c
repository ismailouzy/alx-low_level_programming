#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s: s parametre
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{

	int n = 0;

	while (s[n])
	{
		n++;
	}

	for (n = n - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');

}
