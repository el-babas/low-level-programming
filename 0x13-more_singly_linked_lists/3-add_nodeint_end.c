#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: list
 * @n: value
 * Return: new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp_head;

	if (*head != NULL)
	{
		tmp_head = *head;
		return (add_nodeint_end(&(tmp_head->next), n));
	}
	else
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
}
