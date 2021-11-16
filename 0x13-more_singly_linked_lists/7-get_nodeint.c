#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node.
 * @head: list
 * @index: remove index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	/*listint_t *r_node;*/

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
