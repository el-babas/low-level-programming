#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: dlistint_t linked list
 * @index: the index of the node, starting from 0
 *
 * Return: node the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head != NULL && index != 0)
		return (get_dnodeint_at_index(head->next, index - 1));
	return (head);
}
