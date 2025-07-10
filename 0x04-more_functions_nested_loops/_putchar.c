#include "main.h"
#include <unistd.h>

/**
 * _putchar - an implementation of putchar
 * @c: the character to print
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
