#include "search_algos.h"
int recursive_binary_search(int *array, size_t start, size_t end, int value);

/**
 * binary_search - Searches for a value in a sorted array of integers
 *	using the Binary search algorithm.
 *
 * @array: The array of integers.
 * @size: The size of the array.
 * @value: The value to search.
 *
 * Return: The index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	index = recursive_binary_search(array, index, size - 1, value);

	return (index);
}

/**
 * recursive_binary_search - Searches using the Binary search algorithm.
 *
 * @array: The array of integers.
 * @start: The start of the array.
 * @end: The end of the array.
 * @value: The value to search.
 *
 * Return: The index where value is located.
 */
int recursive_binary_search(int *array, size_t start, size_t end, int value)
{
	size_t middle = 0, i = 0;

	printf("Searching in array: %d", array[start]);
	for (i = 1 + start; i <= end; i++)
		printf(", %d", array[i]);
	printf("\n");

	if (start == end && value != array[start])
		return (-1);

	middle = ((end - start) / 2) + start;

	if (array[middle] == value)
		return (middle);

	if (array[middle] > value)
		return (recursive_binary_search(array, start, middle - 1, value));
	if (array[middle] < value)
		return (recursive_binary_search(array, middle + 1, end, value));

	return (-1);
}
