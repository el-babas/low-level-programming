#include "main.h"
/**
 * print_diagonal - Print diagonal
 * @n: size line
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
