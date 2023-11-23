#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: n parametre
 * 
 * Return: Success
 */

void print_binary(unsigned long int n)
{
	int i, zero = 1;
	unsigned long int fl;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; --i)
	{
		fl = 1L << i;

		if ((n & fl) != 0)
		{
			_putchar('1');
			zero = 0;
		}
		else if (!zero)
		{
			_putchar('0');
		}
	}

	if (zero)
	{
		_putchar('0');
	}
}
