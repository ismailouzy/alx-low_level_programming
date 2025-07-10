#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: digit to check
 *
 * Return: 1 if true, 0 if False;
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	return (0);
}
