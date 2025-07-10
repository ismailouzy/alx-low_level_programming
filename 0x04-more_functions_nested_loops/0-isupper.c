#include "main.h"

/**
 * _isupper - Checks if the character is uppercase
 * @c: the character to Check
 *
 * Return: 1 if true, 0 if not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
