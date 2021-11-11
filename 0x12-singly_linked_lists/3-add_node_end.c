#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - add new node at the end to list
 * @head: nodo
 * @str: content
 *
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end, *temp;

	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
		return (NULL);
	new_end->str = strdup(str);
	new_end->len = strlen(str);
	new_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_end;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_end;
	}
	return (*head);
}
