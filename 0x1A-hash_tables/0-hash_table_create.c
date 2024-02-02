#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: the size of the array
 * Return: the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *tableau_hash = malloc(sizeof(hash_table_t));

	if (tableau_hash == NULL)
	{
		return (NULL);
	}

	tableau_hash->array = malloc(sizeof(hash_node_t *) * size);

	if (tableau_hash->array == NULL)
	{
		free(tableau_hash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		tableau_hash->array[i] = NULL;
	}

	tableau_hash->size = size;

	return (tableau_hash);
}
