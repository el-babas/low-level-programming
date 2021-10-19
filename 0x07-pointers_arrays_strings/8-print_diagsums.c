#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - imprimir suma de diagonal
 * @a: array de doble dimencion cuadrado
 * @size: tamaño del array
 */
void print_diagsums(int *a, int size)
{
	int x, sd1 = 0, sd2 = 0, ss;

	ss = size * size;
	for (x = 0; x < ss; x++)
	{
		if (x % (size + 1) == 0)
			sd1 += *(a + x);
		if (x % (size - 1) == 0 && x != 0 && x != (ss - 1))
			sd2 += *(a + x);
	}
	printf("%d, %d\n", sd1, sd2);
}
