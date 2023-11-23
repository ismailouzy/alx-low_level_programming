#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: n parametre
 * @m: m parametre
 *
 * Return: Success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int pel = n ^ m;


	for (i = 0; pel != 0; i++)
		pel &= (pel - 1);

	return (i);
}
