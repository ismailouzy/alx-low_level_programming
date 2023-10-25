#include <stdio.h>
#include "main.h"

/**
 *  * _pow_recursion - Entry point
 *   *
 *    * @x: x parametre
 *     * @y : y parametre
 *      *
 *       * Return: xy
 */

int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)

		return (-1);

	else if (y == 0)

		return (1);

	else if (y % 2 == 0)
	{
		n = _pow_recursion(x, y / 2);

		return (n * n);
	}

	else
	{

		n = _pow_recursion(x, y / 2);

		return (n * n * x);
	}

}
