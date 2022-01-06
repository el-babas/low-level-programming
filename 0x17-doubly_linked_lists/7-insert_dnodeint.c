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
	dlistint_t *new = NULL, *tmp = NULL;

	tmp = *h;
	if (idx != 0)
	{
		while (tmp != NULL)
		{
			if (idx == 1)
			{
				if (tmp->next != NULL)
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = tmp->next;
						new->prev = tmp;
						tmp->next = new;
						tmp->next->prev = new;
					}
				}
				else
					new = add_dnodeint_end(h, n);
				break;
			}
			idx--;
			tmp = tmp->next;
		}
	}
	else
		new = add_dnodeint(h, n);

	return (new);
}
