#include "main.h"
#include <stdio.h>

/**
 * infinite_add - add two numbers
 * @n1: first interger number
 * @n2: second integer number
 * @r: the buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = size_r - 1, digit1 = 0, digit2 = 0, sum = 0, carry = 0;
	char *p1 = n1, *p2 = n2;

	while (*p1 != '\0')
		p1++;

	while (*p2 != '\0')
		p2++;
	p1--;
	p2--;

	r[i] = '\0';
	i--;

	while (p1 >= n1 || p2 >= n2 || carry)
	{
		if (i < 0)
			return (0);
		digit1 = (p1 >= n1) ? *p1 - '0' : 0;
		digit2 = (p2 >= n2) ? *p2 - '0' : 0;

		sum = digit1 + digit2 +  carry;

		r[i] = (sum % 10) + '0';
		carry = sum / 10;
		p1--;
		p2--;
		i--;
	}
	i++;

	return (&r[i]);
}
