#include <unistd.h>
#include "main.h"

/**
 * _abs - entry point
 *
 * @n: n parametre
 *
 *  Return: Always 0 (Success)
 */

int _abs(int n)
{

	if (n < 0)

		n = -n;

	else

		n = n;

	return (n);

}
