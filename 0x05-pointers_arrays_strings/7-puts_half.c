#include "main.h"

/**
 * puts_half - prints a half of a string
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = i / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
