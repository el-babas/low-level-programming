#include "lists.h"
/**
 * insert_nodeint_at_index - inser new node
 * @head: list
 * @idx: index
 * @n: list->n
 * Return: new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *tmp_head, *new_node;

	if (head != NULL)
	{
		tmp_head = *head;
		while (tmp_head != NULL && idx > i && idx != 0)
		{
			tmp_head = tmp_head->next;
			i++;
		}
		if (tmp_head == NULL && idx != 0)
			return (NULL);
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		if (idx == 0)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
		}
		else
		{
			new_node->n = n;
			new_node->next = tmp_head->next;
			tmp_head->next = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
