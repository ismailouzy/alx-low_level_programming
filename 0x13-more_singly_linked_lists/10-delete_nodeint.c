#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -  deleete the node at the index
 *
 * @head: head struc patametre
 * @index: index parametre
 *
 * Return: Success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *old;

	if (index == 0 && *head == NULL)
	{
		return (-1);
	}


	del = *head;
	old = NULL;

	while (del != NULL && index > 0)
	{
		old = del;
		del = del->next;
		index--;
	}


	if (del == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = del->next;
	} else
	{
		old->next = del->next;
	}

	free(del);

	return (1);
}

