#include <stdio.h>
/**
 * main - Entry point
 *
 * a program that prints the alphabets in lowercase
 *
 * Return: 0 (On success)
 */

int main(void)
{
	int i;

	for (i = (int)'a'; i <= (int)'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
