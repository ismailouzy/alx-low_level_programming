#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - add nod at the end
 *
 * @head: head struc patametre
 * @n: int n parametre
 *
 * Return: Success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new;

	ptr = *head;
	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	new->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new;


}
