#include <stdlib.h>
/**
 * array_range - ordeenar min a max
 * @min: minimo
 * @max: maximo
 * Return: puntero a int
 */
int *array_range(int min, int max)
{
	int *aint;
	int pos = 0;

	if (min > max)
		return (NULL);
	aint = (int *)malloc(sizeof(int) * (max - min + 1));
	if (aint == NULL)
	{
		free(aint);
		return (NULL);
	}
	for (; min <= max; min++, pos++)
		*(aint + pos) = min;
	return (aint);
}
