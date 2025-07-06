#include "main.h"
/**
 * _islower - writes a function in lowercase
 * @c: the asci value
 *
 * Return: on success 1, in errno 0
 */

int _islower(int c)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
