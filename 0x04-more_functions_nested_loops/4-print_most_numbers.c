#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9 except 4 and 2
 *
 * Return: None
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
