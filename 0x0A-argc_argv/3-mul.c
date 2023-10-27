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
	int multi;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	else
	{

		multi = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", multi);
	}
	return (0);
}
