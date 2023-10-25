#include <stdio.h>
#include "main.h"

/**
 * factorial - Entry point
 *
 * @n: n parametre
 *
 * Return: n
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)

		return (-1);

	else
		return (n * factorial(n - 1));

}
