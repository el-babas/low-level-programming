#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: structurs linked
 * Return: new structur reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
