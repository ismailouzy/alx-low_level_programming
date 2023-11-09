#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 *
 * @s: the operator passed as argument to the program
 *
 * Return: Success
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i, ar;

	i = 0;

	while (ops[i].op)
	{
		ar = (s[0] == ops[i].op[0] && s[1] == '\0');
		if (ar)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
