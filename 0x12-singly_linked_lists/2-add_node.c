#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - print struct linked
 * @head: nodo
 * @str: content
 *
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
