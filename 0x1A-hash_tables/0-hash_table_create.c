#include "hash_tables.h"

/**
 * hash_table_create - create a hast table.
 *
 * @size: size of the hast table
 * Return: new hast_table_t* or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	hash_node_t **news_hn;
	unsigned long int i;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
	{
		return (NULL);
	}

	news_hn = malloc(sizeof(hash_node_t *) * size);
	if (news_hn == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		news_hn[i] = NULL;
	}

	new_ht->array = news_hn;
	new_ht->size = size;

	return (new_ht);
}
