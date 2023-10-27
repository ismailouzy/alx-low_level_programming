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

		pos = argv[i];

		if (*pos < 48 || *pos > 57)
		{
			printf("Error\n");

			return (1);
		}

		sum = sum +  atoi(pos);
	}

	printf("%d\n", sum);

	return (0);
}
