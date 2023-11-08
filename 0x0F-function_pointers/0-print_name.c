#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that allocates memory for an array with calloc
 *
 * @name: name ptr parametre
 * @f: f function ptr parametre
 *
 * Return: success.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0 && f == 0)
	{
		return;
	}
		f(name);
}
