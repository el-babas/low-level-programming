#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - imprimir array segun funcion
 * @array: int array
 * @size: tamaño de array elementos
 * @action: funcion a escoger
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(*(array + x));
		}
	}
}
