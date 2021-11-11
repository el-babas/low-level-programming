#include <stdio.h>
#include "lists.h"
/**
 * list_len - number struct linked
 * @h: struct
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			number++;
		}
	}
	return (number);
}
