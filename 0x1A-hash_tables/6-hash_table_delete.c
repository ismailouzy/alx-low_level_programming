#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_n;
	hash_node_t *next_n;
	hash_table_t *head = ht;

	if (head == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current_n = ht->array[i];

		while (current_n != NULL)
		{
			next_n = current_n->next;
			free(current_n->key);
			free(current_n->value);
			free(current_n);
			current_n = next_n;
		}
	}

	free(ht->array);
	free(head);
}
