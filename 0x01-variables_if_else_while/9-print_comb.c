# include <stdlib.h>
# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nm  = 48, co = 44;

	while (nm <= 57)
	{
		putchar(nm);
		if (nm != 57)
		{
			putchar(co);
			putchar(' '); }
			nm = nm + 1;
	}
	putchar('\n');
	return (0);
}
