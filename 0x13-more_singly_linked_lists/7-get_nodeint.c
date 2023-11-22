#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 *
 * @head: head struc patametre
 * @index: int parametre
 *
 * Return: Success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int n = 0;

	if (index == 0 && head == NULL)
	{
		return (NULL);
	}

	while (new != NULL && n < index)
	{
		new = new->next;
		n++;
	}

	if (new == NULL)
	{
		return (NULL);
	}

	return (new);
}
