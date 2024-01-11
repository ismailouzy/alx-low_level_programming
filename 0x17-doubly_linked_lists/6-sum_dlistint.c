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

	while (ptr->next != NULL)
	{
		if (!ptr)
			return (0);
		ptr = ptr->next;
		sum = sum + ptr->n;
	}

	return (sum);
}
