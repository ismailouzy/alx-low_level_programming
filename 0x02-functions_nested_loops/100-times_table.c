#include "main.h"

/**
 * print_times_table - entry point
 *
 * @n: n parametre
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int a, b, ab;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				ab = a * b;

				if (b > 0)
				{
					_putchar(',');
					_putchar(' ');
				}

				if (ab >= 100)
				{
					_putchar((ab / 100) + '0');
					_putchar(((ab / 10) % 10) + '0');
					_putchar((ab % 10) + '0');
				}
				else if (ab >= 10)
				{
					_putchar(' ');
					_putchar((ab / 10) + '0');
					_putchar((ab % 10) + '0');
				}
				else
				{
					if (b > 0)
						_putchar(' ');

					_putchar((ab % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

