#include "main.h"

/**
 * print_number - prints a integer
 * @n: the number to print
 */

void print_number(int n)
{
	int div = n / 10;
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar(45);
		num = -n;
		print_number(num / 10);
		_putchar(num % 10 + '0');
	}
	else if (n > 0)
	{
		if (div > 0)
			print_number(div);
		_putchar(num % 10 + '0');
	}
	else
		_putchar(num % 10 + '0');
}
