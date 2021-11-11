#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free memory single struct linked
 * @head: struct
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
		free(head->str);
		free(head);
	}
}
