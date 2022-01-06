#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list
 * @idx: position insert
 * @n: value
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;

	tmp = *h;
	if (idx != 0)
	{
		while (tmp != NULL)
		{
			if (idx == 1)
			{
				new = malloc(sizeof(dlistint_t));
				if (new != NULL)
				{
					new->n = n;
					new->next = tmp->next;
					new->prev = tmp;
					tmp->next = new;
					if (tmp->next != NULL)
						tmp->next->prev = new;
				}
				break;
			}
			idx--;
			tmp = tmp->next;
		}
	}
	else
	{
		new = add_dnodeint(h, n);
	}
	return (new);
}
