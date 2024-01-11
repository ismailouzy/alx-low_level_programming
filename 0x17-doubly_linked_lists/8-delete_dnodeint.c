#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: the pointer to the head of the node
 * @index: the index of the node
 * Return: Success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	dlistint_t *ptr2;

	if (*head == NULL)
		return (-1);

	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = NULL;
		free(ptr);
		return (1);
	}
	while (index != 1)
	{
		ptr = ptr->next;
		index--;
	}
	ptr2 = ptr->prev;
	ptr2->next = ptr->next;
	ptr->next->prev = ptr2;
	free(ptr);
	ptr = NULL;

	return (1);

}
