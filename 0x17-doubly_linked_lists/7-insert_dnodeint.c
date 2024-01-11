#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting a node at index
 * @h: the pointer to the head of the node
 * @idx: the index of the node
 * @n: data of the node
 * Return: Success
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *new;

	ptr = *h;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		idx--;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;


	if (ptr->next != NULL)
		new = ptr->next->prev;
	new->next = ptr->next;
	new->prev = ptr;
	ptr->next = new;


	return (new);
}
