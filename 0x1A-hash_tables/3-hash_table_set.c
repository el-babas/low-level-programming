#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 *
 * @ht: The hash table.
 * @key: The key (unique in the HashTable).
 * @value: The value corresponding to a key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hn;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	for (i = idx; ht->array[i] != NULL; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	new_hn = malloc(sizeof(hash_node_t));
	if (new_hn == NULL)
		return (0);
	new_hn->key = strdup(key);
	new_hn->value = strdup(value);
	new_hn->next = ht->array[idx];
	ht->array[idx] = new_hn;

	return (1);
}
