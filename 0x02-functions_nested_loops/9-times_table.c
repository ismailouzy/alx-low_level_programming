#include <unistd.h>
#include "main.h"

/**
 * times_table - entry point
 *
 *
 *
 *  Return: Always 0 (Success)
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; ++a)
	{
		for (b = 0; b <= 9; ++b)
		{
			int ab = a * b;

			if (ab / 10 > 0)
			{
				putchar(ab / 10 + '0');
			} else
			{
				putchar(' ');
			}
			putchar(ab % 10 + '0');
			if (b < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');
	}


}