#include "main.h"

/**
 * puts2 - prints every other character on a string
 * starting with the first character.
 * @str: pointer to the string.
 */

void puts2(char *str)
{
	_putchar(*str);
	while (*str != '\0')
	{
		str = str + 2;
		_putchar(*str);
	}
	_putchar('\n');
}
