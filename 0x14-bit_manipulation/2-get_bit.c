#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: n parametre
 * @index: index parametre
 * 
 * Return: Success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int pel, ban;

	ban = sizeof(unsigned long int) * 8;
	pel = 1UL << index;
	if (index >= ban)
		return (-1);

	if ((n & pel) != 0)
		return (1);

	return (0);

}
