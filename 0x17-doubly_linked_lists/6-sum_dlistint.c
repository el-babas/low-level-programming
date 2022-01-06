#include "lists.h"

/**
 * sum_dlistint - sum data (n)
 * @head: dlistint_t linked list
 *
 * Return: sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	if (head != NULL)
		return (head->n + sum_dlistint(head->next));
	return (0);
}
