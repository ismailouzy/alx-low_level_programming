#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 *
 * @b: b parametre
 *
 * Return: Success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0;
	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec <<= 1;
		dec += (b[i] - '0');
		i++;
	}

	return (dec);
}
