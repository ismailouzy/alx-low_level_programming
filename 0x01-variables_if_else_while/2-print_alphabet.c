# include <stdlib.h>
# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az  = 'a';

	while (az <= 'z')
	{
		putchar(az);
		az = az + 1;
	}
	putchar('\n');
	return (0);
}
