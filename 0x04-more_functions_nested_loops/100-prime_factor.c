#include <stdio.h>
/**
 * main - entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143, a;

	for (a = 2; a * a <= n; a++)
	{
		while (n % a == 0)
		{
			n /= a;
		}
	}
	printf("%ld\n", n);

	return (0);
}

