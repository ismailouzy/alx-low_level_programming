#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints all
 *
 * @format: , format parameter
 *
 * Return: Success
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int num, i = 0;
	char c, *ch;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				ch = va_arg(args, char *);
				if (ch == 0)
				{
					printf("(nil)");
					break; }
				while (ch != 0)
				{
					printf("%s", ch);
					break; }
				break;
			default:
				i++;
				continue; }
		if (format[i + 1] != '\0')
		{
			printf(", "); }
		i++; }
	printf("\n");
	va_end(args); }
