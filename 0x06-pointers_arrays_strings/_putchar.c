#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: a character
 *
 * Return: 1 on success, 0 on errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
