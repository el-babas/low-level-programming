#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - busca posicion de un entero
 * @array: array de enteros
 * @size: tamaño de array
 * @cmp: funcion a invocar
 * Return: posicion de entero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		result = cmp(*(array + x));
		if (result > 0)
			return (x);
	}
	return (-1);
}
