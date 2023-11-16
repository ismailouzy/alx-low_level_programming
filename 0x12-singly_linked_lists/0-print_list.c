#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements
 *
 * @h: pointer
 *
 * Return: Success
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", n);
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		n++;
		h = h->next;
	}

	return (n);
}
