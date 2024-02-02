#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_n;
	unsigned long int i;
	int tb = 0;

	if (ht == NULL)
		return;

	printf("{");



	for (i = 0; i < ht->size; i++)
	{
		current_n = ht->array[i];

		while (current_n != NULL)
		{
			if (tb > 0)
				printf(", ");

			printf("'%s': '%s'", current_n->key, current_n->value);

			tb++;
			current_n = current_n->next;
		}
	}

	printf("}\n");
}
