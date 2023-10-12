#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long f1 = 1, f2 = 2, sum;

	printf("%lu, %lu", f1, f2);

	for (int i = 2; i < 50; ++i)
	{
		sum = f1 + f2;
		printf(", ");
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;
	}

	printf("\n");

	return (0);
}

