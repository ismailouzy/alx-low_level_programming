#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at n position
 * @head: the pointer to the head of the node
 * @index: the position of the node
 * Return: Success
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *ptr;

	ptr = head;

	while (index != 0)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
