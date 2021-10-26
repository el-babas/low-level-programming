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
	unsigned int x;

	if (size == 0)
		return (NULL);

	word = malloc(sizeof(char) * size);
	if (word != NULL)
	{
		for (x = 0; x < size; x++)
			*(word + x) = c;
	}
	return (word);
}
