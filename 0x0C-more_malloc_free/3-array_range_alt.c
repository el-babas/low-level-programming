#include <stdlib.h>
/**
 * array_range - create array int 
 * @min: number min
 * @mac: number max
 * Return: pointer array (min to max)
 */
int *array_range(int min , int max)
{
	int length, pos = 0;
	int *arr_int;

	if (min > max)
		return (NULL);

	/* Length = ((max - min) / r) + 1 - math */
	length = (max - min + 1);
	arr_int = (int *)malloc(length * sizeof(int));

	/* if malloc faild return NULL */
	if (arr_int == NULL)
		return (NULL);

	/* go from start (min) to end (min) */
	for (; min <= max; min++, pos++)
		*(arr_int + pos) = min;
	return (arr_int);
}
