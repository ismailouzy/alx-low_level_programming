#include "main.h"

/**
 * print_number - entry point
 *
 * @n : n parametre
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = (-1) * n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');

}
