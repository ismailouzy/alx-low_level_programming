# include <stdlib.h>
# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az  = 'z';

	while (az >= 'a')
	{
		putchar(az);
		az = az - 1;
	}
	putchar('\n');
	return (0);
}
