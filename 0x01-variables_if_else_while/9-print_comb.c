#include <stdio.h>
/**
 * main - Entry point
 *
 * a program that print all possible comb. of a single digit
 *
 * Return: 0 (On success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
