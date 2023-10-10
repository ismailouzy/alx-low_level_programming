#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char a;

	for (a = 97 ; a <= 122 ; a++)
		putchar(a);
	putchar('\n');

}

