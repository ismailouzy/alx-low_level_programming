#include "main.h"

/**
 * print_line - entry point
 *
 * @n : n parametre
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < n ; a++)
		{
			_putchar('_');

		}
		_putchar('\n');
	}

}
