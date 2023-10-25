#include <stdio.h>
#include "main.h"

/**
 *  * _sqrt_recursion - Entry point
 *   *
 *    * @n: n parametre
 *     *
 *      * Return: sq
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (whatissquare(n, 0));
}

/**
 *  * whatissquare - recursion point
 *   *
 *    * @n: n parametre
 *     * @sq: sq parametre
 *      *
 *       * Return: sq
 */

int whatissquare(int n, int sq)
{
	if (sq * sq == n)
	{
		return (sq);
	} else if (sq * sq > n)
	{
		return (-1);
	}
	return (whatissquare(n, sq + 1));
}
