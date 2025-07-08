#include <stdio.h>
/**
 * main - prints the sum of even valued terms
 * in the 4,000,000 fibonnaci
 *
 * Return: 0 on success.
 */

int main(void)
{
	unsigned long a = 1, b = 2, next, sum = 0;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
			continue;
		else if (i == 1 && sum % 2 == 0)
		{
			sum += b;
		}
		else if (i != 0)
		{
			if (sum < 4000000)
			{
				next = a + b;
				if (next % 2 == 0)
					sum += next;
				a = b;
				b = next;
			}
			else
			{
				break;
			}
		}
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
