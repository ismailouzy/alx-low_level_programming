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

	ptr = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = NULL;
		free(ptr);
		return (1);
	}

	while (index != 0)
	{
		ptr = ptr->next;
		index--;
	}

	if (ptr == NULL)
		return (-1);

	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;

	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;

	free(ptr);
	ptr = NULL;
	return (1);
}
