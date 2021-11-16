#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: list
 * Return: number of nod
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
