#include "search_algos.h"
int recursive_binary_search(int *array, size_t start, size_t end, int value);

/**
 * exponential_search - Function that searches for a value in a sorted
 *	array of integers using the Exponential search algorithm
 *
 * @array: The pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search.
 * Return: The first index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, start = 0, end = 0;

	if (array == NULL || size == 0)
		return (-1);

	if (array[i] == value)
		return (i);

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	start = i / 2;
	end = ((i > size - 1) ? size - 1 : i);

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	return (recursive_binary_search(array, start, end, value));
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
