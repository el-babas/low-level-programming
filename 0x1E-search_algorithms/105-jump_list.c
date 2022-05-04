#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted linked list
 *	of integers using the Jump search algorithm.
 *
 * @list: The pointer to the first element of the list.
 * @size: The size of the array.
 * @value: The value to search.
 *
 * Return: The first index where value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t root = 0, index = 0;
	/* st = start and ed = end */
	listint_t *st = NULL, *ed = NULL;

	if (list == NULL || size == 0)
		return (NULL);

	root = sqrt(size);
	st = list;
	ed = list;

	while (index < size && ed->next != NULL && ed->n < value)
	{
		st = ed;
		index = st->index + root;
		while (ed->next != NULL && ed->index < index)
			ed = ed->next;
		printf("Value checked at index [%ld] = [%d]\n", ed->index, ed->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", st->index, ed->index);
	for ( ; st != NULL && st->index <= ed->index; st = st->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", st->index, st->n);
		if (st->n == value)
			return (st);
	}

	return (NULL);
}
