#include "lists.h"
/**
 * free_listint - Function that frees a listint_t list.
 * @head: list
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
