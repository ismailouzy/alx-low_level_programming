# include <stdlib.h>
# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az  = 97, AZ = 65;

	while (az <= 122)
	{
		putchar(az);
		az = az + 1;
	}
	while (AZ <= 90)
	{
		putchar(AZ);
		AZ = AZ + 1;
	}
	putchar('\n');
	return (0);
}
