#include "main.h"

/**
 * _puts - prints a string after a new line
 * @str: the string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
