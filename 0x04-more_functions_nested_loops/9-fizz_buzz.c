#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("fizz");
		}
		else if (a % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("%d", a);
		}
		printf(" ");
	}
	return (0);
}
