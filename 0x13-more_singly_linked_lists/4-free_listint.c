#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - frees memory
 *
 * @head: head struc patametre
 *
 * Return: Success
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
