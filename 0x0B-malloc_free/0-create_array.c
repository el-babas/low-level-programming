#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array with malloc
 * @size: tamaño de la cadena
 * @c: carater incial
 * Return: cadena
 */
char *create_array(unsigned int size, char c)
{
	char *word;
	unsigned int sz = sizeof(char) * size, x;

	if (sz > 0)
	{
		word = malloc(sz);
		for (x = 0; x < size; x++)
			*(word + x) = c;
	}
	else
	{
		word = NULL;
	}
	return (word);
}
