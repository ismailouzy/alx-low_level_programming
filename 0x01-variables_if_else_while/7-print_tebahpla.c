#include <stdio.h>
/**
 * main - Entry point
 *
 * a program that prints the alphabets backwards
 *
 * Return: 0 (On success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
