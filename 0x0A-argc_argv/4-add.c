#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argc parametre
 * @argv: argv parametre
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *pos;

	for (i = 1; i < argc; i++)
	{
		for (pos = argv[i]; *pos; pos++)
		{
			if (*pos < '0' || *pos > '9')
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
