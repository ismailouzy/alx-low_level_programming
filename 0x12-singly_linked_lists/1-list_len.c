#include <stdio.h>
#include "lists.h"

/**
 * list_len - count all the elements
 *
 * @h: pointer
 *
 * Return: Success
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
