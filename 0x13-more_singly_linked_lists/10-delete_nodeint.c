#include "lists.h"
/**
 * delete_nodeint_at_index - inser new node
 * @head: list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *prev_node, *next_node;

	if (head != NULL)
	{
		prev_node = *head;
		while (prev_node != NULL && index > i)
		{
			prev_node = prev_node->next;
			i++;
		}
		if (prev_node == NULL && index != i)
		{
			return (-1);
		}
		next_node = prev_node->next;
		if (index == 0)
		{
			free(prev_node);
			*head = next_node;
		}
		else
		{
			prev_node->next = next_node->next;
			free(next_node);
		}
		return (1);
	}
	return (-1);
}
