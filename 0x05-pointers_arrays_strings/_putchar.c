#include "main.h"
#include <unistd.h>

/**
 * _putchar - implementation of putchar
 * @c: the character to print
 *
 * Return: 1 on success, 0 on Errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
