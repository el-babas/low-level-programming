#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 *
 * @ht: The hash table you want to look into
 * @key: The key you are looking for
 * Return: Value associated with the element (NULL if key couldn’t be found)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp_hn;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	/* Info - Get index the linked list*/
	tmp_hn = ht->array[idx];
	/* Info - Search node in the linked list */
	while (tmp_hn != NULL)
	{
		if (strcmp(tmp_hn->key, key) == 0)
			return (tmp_hn->value);
		tmp_hn = tmp_hn->next;
	}

	return (NULL);
}
