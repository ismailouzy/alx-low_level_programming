#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - delete the head
 *
 * @head: head struc patametre
 *
 * Return: Success
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *new;

	if (*head == NULL)
		return (0);
	else
	{

		new = *head;
		*head = (*head)->next;
		n = new->n;
		free(new);
	}
	return (n);
}
