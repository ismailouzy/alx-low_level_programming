#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - entry point
 *
 *
 * @n: n parametre
 *
 */

void print_to_98(int n)
{
	int a;

	if (n > 98)
		for (a = n; a > 98; a = a - 1)
			printf("%d, ", a);
	else
		for (a = n; a < 98; a = a + 1)
			printf("%d, ", a);
	printf("%d\n", a);

}
