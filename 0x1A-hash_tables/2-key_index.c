#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key.
 *
 * @key: The key.
 * @size: The size of the array of the hash table.
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
