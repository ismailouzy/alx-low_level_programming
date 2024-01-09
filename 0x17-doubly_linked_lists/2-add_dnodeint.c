#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node in the beginning
 *
 * @head: pointer to the header
 * @n: data
 *
 * Return: the new node
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;


	if (*head == NULL)
		*head = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	}
	return (*head);
}
