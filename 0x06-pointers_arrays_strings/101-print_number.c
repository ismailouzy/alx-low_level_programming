#include "main.h"

/**
 * print_number - prints a number using putchar
 * @n: an interger to print
 */

void print_number(int n)
{
	unsigned int num;
	unsigned int power = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	while (num / power >= 10)
		power *= 10;

	while (power > 0)
	{
		_putchar((num / power) % 10 + '0');
		power /= 10;
	}
}
