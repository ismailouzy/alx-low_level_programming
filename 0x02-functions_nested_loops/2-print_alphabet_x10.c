#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char a, b;

	for (a = '0' ; a <= '9' ; a++)
	{

		for (b = 97  ; b <= 122 ; b++)

			_putchar(b);
		_putchar('\n');
	}

}

