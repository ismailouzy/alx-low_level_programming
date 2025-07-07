#include "main.h"
/**
 * times_table - printe the 9 times
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((j * i) < 10)
			{
				_putchar((j * i) + '0');
				_putchar(' ');
			}
			else
			{
				_putchar(((j * i) / 10) + '0');
				_putchar(((j * i) % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
