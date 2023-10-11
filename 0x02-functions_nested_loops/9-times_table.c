#include "main.h"
/**
 * times_table - entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int ab = (a * b);

			if (b > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (ab >= 10)
			{
				_putchar((ab / 10) + '0');
				_putchar((ab % 10) + '0');
			}
			else if (ab < 10 && b > 0)
			{
				_putchar(' ');
				_putchar((ab % 10) + '0');
			}
			else
				_putchar((ab % 10) + '0');
		}
		_putchar('\n');
	}
}
