#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 *
 * @head: head struc patametre
 * @idx: index parametre
 * @n: int n parametre
 *
 * Return: Success
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *old;
	unsigned int id = 0;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		old = head;

		while (old != NULL && id < idx - 1)
		{
			old = old->next;
			id++;
		}

		new->next = old->next;
		old->next = new;
	}

	return (new);
}
