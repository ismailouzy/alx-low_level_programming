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
	dllistint_t *ptr;

	ptr = head;

	while (head != NULL)
	{
	head = head->next;
	free(ptr);
	ptr = head;
	}
}
