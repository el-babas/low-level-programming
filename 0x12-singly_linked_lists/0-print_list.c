#include <stdio.h>
#include "lists.h"
/**
 * print_list - print struct linked
 * @h: struct
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t number = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			if (h->str != NULL)
				printf("[%d] %s\n", h->len, h->str);
			else
				printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
			number++;
		}
	}
	return (number);
}
