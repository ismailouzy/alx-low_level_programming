# include <stdlib.h>
# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az  = 97;

	while (az <= 122)
	{
		if (az != 101 && az != 113)
			putchar(az);
		az = az + 1;
	}
	putchar('\n');
	return (0);
}
