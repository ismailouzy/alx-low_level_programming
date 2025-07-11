#include "main.h"

/**
 * print_number - prints a integer
 * @n: the number to print
 */

void print_number(int n)
{
	int div = n / 10;
	unsigned int num;

	if (n < 0)
	{
		_putchar(45);
		num = -n;
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else if (n > 0)
	{
		if (div > 0)
			print_number(div);
		_putchar(n % 10 + '0');
	}
	else
		_putchar(48);
}
