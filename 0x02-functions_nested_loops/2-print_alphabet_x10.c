#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 */

void print_alphabet_x10(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
