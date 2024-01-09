#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - a function that frees a linked list
 *
 * @head: pointer to the header
 *
 */

void free_dlistint(dlistint_t *head)
{
	while(head)
	{
	free(head->prev);
	free(head->next);
	free(head);
	}
}
