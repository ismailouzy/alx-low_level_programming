#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to printf
 *
 * Return: On success 1
 * On error, -1 and errno is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
