#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (On success)
 */

int main(void)
{
	int n;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		mod = ((-1 * n) % 10) * -1;
	else
		mod = n % 10;

	if (mod > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	else if (mod == 0)
		printf("Last digit of %d is %d and is 0\n", n, mod);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	return (0);
}
