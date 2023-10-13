#include "main.h"

/**
 * print_triangle - entry point
 *
 * @size : size parametre
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, b, c;

		for (a = 1; a <= size ; a++)
		{
			for (b = 0; b < size - a; b++)
			{
				_putchar(' ');
			}

			for (c = 0; c < a; c++)
				_putchar('#');
			_putchar('\n');
		}

	}

}
