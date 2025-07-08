#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 On success.
 */

int main(void)
{
	long int a, b, i, next;

	a = 1;
	b = 2;

	for (i = 0; i <= 50; i++)
	{
		if (i == 0)
			printf("%ld", a);
		else if (i == 1)
			printf(", %ld", b);
		else
		{
			next = a + b;
			printf(", %ld", next);
			a = b;
			b = next;
		}
	}
	printf("\n");
	return (0);
}
