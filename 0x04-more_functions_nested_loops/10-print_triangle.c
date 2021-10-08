#include "main.h"
/**
 * print_triangle - Print diagonal
 * @size: size
 */
void print_triangle(int size)
{
	int x, y, z;

	for (x = 0; x < size; x++)
	{
		for (y = 1; y < (size - x); y++)
		{
			_putchar(' ');
		}
		for (z = 0; z <= x; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
