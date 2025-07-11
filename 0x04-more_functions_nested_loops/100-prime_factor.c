#include <stdio.h>

/**
 * main - finds and prints the largest
 * prime factor of 612852475143
 *
 * Return: 0 on success.
 */

int main(void)
{
	long int n = 612852475143;
	int start = 2, largest = 0;

	while (n > 1)
	{
		if (n % start == 0)
		{
			largest = start;
			n /= start;
		}
		else
			start++;
	}
	printf("%d\n", largest);
	return (0);
}
