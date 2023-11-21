#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - prints the number of elememnts
 *
 * @h: h struc patametre
 *
 * Return: Success
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{

		i++;
		h = h->next;
	}

	return (i);
}
