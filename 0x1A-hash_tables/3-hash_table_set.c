#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value
 * Return: 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *nod_jdida, *current_n;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	current_n = ht->array[idx];

	while (current_n != NULL)
	{
		if (strcmp(current_n->key, key) == 0)
		{
			free(current_n->value);
			current_n->value = strdup(value);
			return (current_n->value != NULL);
		}
		current_n = current_n->next;
	}

	nod_jdida = malloc(sizeof(hash_node_t));
	if (nod_jdida == NULL)
		return (0);

	nod_jdida->key = strdup(key);
	nod_jdida->value = strdup(value);

	if (nod_jdida->key == NULL || nod_jdida->value == NULL)
	{
		free(nod_jdida->key);
		free(nod_jdida->value);
		free(nod_jdida);
		return (0);
	}

	nod_jdida->next = ht->array[idx];
	ht->array[idx] = nod_jdida;

	return (1);
}
