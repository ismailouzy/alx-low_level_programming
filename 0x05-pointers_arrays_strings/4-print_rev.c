#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	while (count > 0)
	{
		s--;
		count--;
		_putchar(*s);
	}
	_putchar('\n');

}
