#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 *
 * @str: str parametre
 * @head: parametre
 *
 * Return: Success
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (head == NULL || new == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	}

	new->len = len;

	new->next = *head;

	*head = new;

	return (new);
}
