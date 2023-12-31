#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints the elememnts
 *
 * @h: h struc patametre
 *
 * Return: Success
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);

		i++;
		h = h->next;
	}

	return (i);
}
