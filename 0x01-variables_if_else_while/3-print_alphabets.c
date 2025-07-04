#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (On success)
 */

int main(void)
{
	int i;

	for (i = (int)'a'; i <= (int)'z'; i++)
		putchar(i);
	for (i = (int)'A'; i <= (int)'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
