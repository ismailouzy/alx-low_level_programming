#include "main.h"
/**
 * _abs - prints the absolute value on an int
 * @n: an integer parameter
 *
 * Return: the absolute value of the int argument
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
