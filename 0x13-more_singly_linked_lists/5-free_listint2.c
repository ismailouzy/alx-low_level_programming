#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - frees memory
 *
 * @head: head struc patametre
 *
 * Return: Success
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
	*head = NULL;
}
