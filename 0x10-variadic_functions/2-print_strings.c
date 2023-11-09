#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 *
 * @separator: , separator parameter
 * @n: n int parameter
 *
 * Return: Success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ch;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(args, char *);

		if (ch == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ch);
		}
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
