#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 *
 * @argc: num of args
 * @argv: arg vector
 *
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *sign;
	int (*oper_f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	sign = argv[2];
	b = atoi(argv[3]);

	oper_f = get_op_func(sign);

	if (!oper_f)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*sign == '/' || *sign == '%') && !b)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", oper_f(a, b));

	return (0);
}
