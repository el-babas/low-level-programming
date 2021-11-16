#include "lists.h"
/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_head;

	while (*head != NULL)
	{
		tmp_head = *head;
		*head = (*head)->next;
		free(tmp_head);
	}
	*head = NULL;
}
