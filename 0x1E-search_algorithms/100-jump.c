#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 *	of integers using the Jump search algorithm.
 *
 * @array: The array of integers.
 * @size: The size of the array.
 * @value: The value to search.
 *
 * Return: The first index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t root = 0, i_start = 0, i_end = 0;

	if (array == NULL || size == 0)
		return (-1);

	root = sqrt(size);

	while (i_end < size && array[i_end] < value)
	{
		i_start = i_end;
		i_end = i_start + root;
		printf("Value checked array[%ld] = [%d]\n", i_start, array[i_start]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i_start, i_end);
	for ( ; i_start < size && i_start <= i_end; i_start++)
	{
		printf("Value checked array[%ld] = [%d]\n", i_start, array[i_start]);
		if (array[i_start] == value)
			return (i_start);
	}

	return (-1);
}
