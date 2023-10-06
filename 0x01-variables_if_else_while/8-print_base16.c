# include <stdlib.h>
# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nm  = 48, az = 97;

	while (nm <= 57)
	{
		putchar(nm);
		nm = nm + 1;
	}
	while (az <= 102)
	{
		putchar(az);
		az = az + 1;
	}
	putchar('\n');
	return (0);
}
