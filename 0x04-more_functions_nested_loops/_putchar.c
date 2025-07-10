#include "main.h"
#include <unistd.h>

/**
 * _putchar - an implementation of putchar
 * @c: the character to print
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
