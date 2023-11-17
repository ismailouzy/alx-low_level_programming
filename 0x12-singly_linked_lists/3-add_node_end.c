#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 *
 * @str: str parametre
 * @head: parametre
 *
 * Return: Success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int lent = 0;
	list_t *new = malloc(sizeof(list_t));
	list_t *old = *head;

	if (head == NULL || new == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
		new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[lent] != '\0')
		lent++;

	new->len = lent;


	if (*head == NULL)
	{
		*head = new;
	}
	else
	{

		while (old->next != NULL)
		{
			old = old->next;
		}
		old->next = new;
	}

	return (new);
}
