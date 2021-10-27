#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - libera memoria
 * @grid: array 2D
 * @height: libera cadena
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL)
	{
		for (x = 0; x < height; x++)
			free(*(grid + x));
		free(grid);
	}
}
