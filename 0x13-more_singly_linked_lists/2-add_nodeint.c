#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds a node in the beginning
 *
 * @head: head patametre
 * @n: n int parametre
 *
 * Return: Success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
