#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - concatena cadena
 * @width: cadena 1
 * @height: cadena 2
 * Return: int x * y
 */
int **alloc_grid(int width, int height)
{
	int x, a, b;
	int **numbers;

	if (width <= 0 || height <= 0)
		return (NULL);
	numbers = (int **)malloc(height * sizeof(int *));
	if (numbers == NULL)
	{
		free(numbers);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		*(numbers + x) = (int *)malloc(width * sizeof(int));
		if (*(numbers + x) == NULL)
		{
			/*Retrocedemos a la posicion anterior y liberamos*/
			x = x - 1;
			for (; x >= 0; x--)
				free(*(numbers + x));
			free(numbers);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < height; b++)
			numbers[a][b] = 0;
	}
	return (numbers);
}
