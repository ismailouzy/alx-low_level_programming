#include "main.h"

/**
 * puts2 - prints every other character on a string
 * starting with the first character.
 * @str: pointer to the string.
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		if (*(str + 1) == '\0')
			break;
		str = str + 2;
	}
	_putchar('\n');
}
