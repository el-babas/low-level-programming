#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t
 * @head: dlistint_t
 * @n: number of node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp_node;
	
	tmp_node = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = tmp_node;
	if (tmp_node != NULL)
		tmp_node->prev = new_node;
	*head = new_node;
	return (new_node);
}
