#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - entry point
 *
 * @n: n parametre
 *
 *  Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int lg;

	lg = n % 10;

	if (lg < 0)

		lg = -1 * lg;

	_putchar(lg + '0');

	return (lg);


}
