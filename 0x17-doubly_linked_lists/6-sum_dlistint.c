#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of nodes
 * @head: the pointer to the head of the node
 * Return: Success
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *ptr;

	ptr = head;
	sum = 0;

	while (ptr != NULL)
	{
		if (!ptr)
			return (0);
		sum = sum + ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
