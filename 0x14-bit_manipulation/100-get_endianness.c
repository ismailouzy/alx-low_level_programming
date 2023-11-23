#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: Success
 */

int get_endianness(void)
{
	int num = 1;
	char *pel = (char *)&num;

	return ((int)*pel);
}
