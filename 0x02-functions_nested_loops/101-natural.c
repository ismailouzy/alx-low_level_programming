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
	int a = 0, sum = 0;

	do
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			sum = sum + a;

		a++;
	} while (a < 1024);

	printf("%d\n", sum);

	return 0;
}
