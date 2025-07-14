#include "main.h"

/**
 * puts_half - prints a half of a string
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int i = 0, j, ag = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if(i % 2 == 0)
		ag = i / 2;
	else
		ag = (i - 1) / 2;
		 

	for (j = ag; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
