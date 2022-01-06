#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t
 * @head: dlistint_t list
 * @n: value
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp_node;

	tmp_node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	while (tmp_node != NULL && tmp_node->next != NULL)
		tmp_node = tmp_node->next;
	new_node->n = n;
	new_node->prev = tmp_node;
	new_node->next = NULL;
	if (tmp_node != NULL)
		tmp_node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
