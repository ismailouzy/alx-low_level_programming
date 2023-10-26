#include <stdio.h>
#include "main.h"

/**
 *  * is_prime_number - entry point
 *   *
 *    * @n: n parametre
 *     *
 *      * Return: testprime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (tesprime(n, n - 1));
}

/**
 *  * tesprime - recursion point
 *   *
 *    * @n: n parametre
 *     * @ck: ck parametre
 *      *
 *       * Return: testprime
 */

int tesprime(int n, int ck)
{
	if (ck == 1)
	{
		return (1);
	}

	if (n % ck == 0)
	{
		return (0);
	}

	return (tesprime(n, ck - 1));
}
