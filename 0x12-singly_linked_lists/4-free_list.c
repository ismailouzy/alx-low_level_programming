#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees the list_t
 *
 * @head: parametre
 */

void free_list(list_t *head)
{
	list_t *next_n, *now = head;

	if (head == NULL)
		return;

	while (now != NULL)
	{
		next_n = now->next;
		free(now->str);
		free(now);
		now = next_n;
	}
}
