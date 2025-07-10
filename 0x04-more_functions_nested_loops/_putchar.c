#include "main.h"
#include <unistd.h>

/**
 * _putchar - an implementation of putchar
 * prints a character
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
