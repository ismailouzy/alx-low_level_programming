#include "main.h"
/**
 * print_last_digit - prints the last digit of number
 * @n: a number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int mod = n % 10;

	if (n < 0)
		mod = -mod;
	_putchar(mod + '0');
	return (mod);
}
