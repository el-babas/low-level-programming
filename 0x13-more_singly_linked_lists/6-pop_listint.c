#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp_head;

	if (head != NULL && *head != NULL)
	{
		tmp_head = *head;
		*head = tmp_head->next;
		n = tmp_head->n;
		free(tmp_head);
		return (n);
	}
	return (n);
}
