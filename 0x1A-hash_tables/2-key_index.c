#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: pointer to the key
 * @size: size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
