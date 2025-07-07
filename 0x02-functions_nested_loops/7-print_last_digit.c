#include "main.h"
/**
 * print_last_digit - prints the last digit of number
 * @n: a number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int mod;

	if (n < 0)
		mod = (n * -1) % 10;
	else
		mod = n % 10;
	_putchar(mod + '0');
	return (mod);
}
