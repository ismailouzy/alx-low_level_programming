#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the asci value
 *
 * Return: 1 on success, 0 on errno
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
