#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - returns the sum
 *
 * @head: head struc patametre
 *
 * Return: Success
 */

int sum_listint(listint_t *head)
{

	int sum = 0;
	listint_t *new = head;

	if (head == NULL)
		return (0);

	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}

	return (sum);
}
