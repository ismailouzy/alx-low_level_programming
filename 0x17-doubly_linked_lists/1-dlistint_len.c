#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints the length of the doubly linked list
 *
 * @h: pointer to the header
 *
 * Return: the number of nodes
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
