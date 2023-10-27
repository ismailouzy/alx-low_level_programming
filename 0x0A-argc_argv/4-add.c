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
	int pos, i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		pos = atoi(argv[i]);

		if (pos == 0 && *argv[i] != '0')
		{
			printf("Error\n");

			return (1);
		}

		sum = sum + pos;
	}

	printf("%d\n", sum);

	return (0);
}
