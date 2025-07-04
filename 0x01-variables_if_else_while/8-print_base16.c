#include <stdio.h>
/**
 * main - Entry point
 *
 * program that prints base16 in lowercase
 *
 * Return: 0 (On success)
 */

int main(void)
{
	int letter;
	int number;

	for (number = 48; number < 58; number++)
		putchar(number);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}

