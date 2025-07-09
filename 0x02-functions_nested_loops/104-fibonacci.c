/**
 * main - Entry point.
 *
 * Return: 0 on success.
 */


void print_num(unsigned long n);
int main(void)
{
	unsigned long a = 1, b = 2, next;
	int i;

	for (i = 0; i < 98; i++)
	{
		if (i == 0)
			_putchar(a + '0');
		else if (i == 1)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(b + '0');
		}
		else
		{
			next = a + b;
			_putchar(',');
			_putchar(' ');
			print_num(next);
			a = b;
			b = next;
		}
	}
	_putchar('\n');
	return (0);
}

/**
 * print_num - print a number using _putchar
 * @n: the unsigned number.
 */

void print_num(unsigned long n)
{
	if (n / 10)
		print_num(n / 10);
	_putchar(n % 10 + '0');
}
