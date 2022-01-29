#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 *
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_hn, *free_hn;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current_hn = ht->array[i];
		while (current_hn != NULL)
		{
			free_hn = current_hn;
			free(free_hn->key);
			free(free_hn->value);
			free(free_hn);
			current_hn = current_hn->next;
		}
	}
	free(ht->array);
	free(ht);
}
