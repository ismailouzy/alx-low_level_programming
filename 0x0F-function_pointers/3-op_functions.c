#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum of a & b
 * @a: a parametre
 * @b: b parametre
 *
 * Return: success
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub of a & b
 * @a: a parametre
 * @b: b parametre
 *
 * Return: success
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a & b
 * @a: a parametre
 * @b: b parametre
 *
 * Return: success
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of a & b
 * @a: a parametre
 * @b: b parametre
 *
 * Return: success
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a mod b
 * @a: a parametre
 * @b: b parametre
 *
 * Return: success
 */
int op_mod(int a, int b)
{
	return (a % b);
}
