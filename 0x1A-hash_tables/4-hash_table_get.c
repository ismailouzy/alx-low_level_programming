#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: The hash table.
 * @key: The key
 * Return: Null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current_n;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	current_n = ht->array[idx];

	while (current_n != NULL)
	{
		if (strcmp(current_n->key, key) == 0)
			return (current_n->value);

		current_n = current_n->next;
	}

	return (NULL);
}
