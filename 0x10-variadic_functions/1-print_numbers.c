#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: , separator parameter
 * @n: n int parameter
 *
 * Return: Success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;

	va_list args;

	va_start(args, n);

	if (!n)
	{

		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);

			printf("%d", num);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);

		}
	printf("\n");
	}
	va_end(args);
}
