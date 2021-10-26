#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplica cadena
 * @str: cadena a duplicar
 * Return: cadena duplicada
 */
char *_strdup(char *str)
{
	unsigned int x, size = 0;
	char *word;

	if (str == NULL)
		return (NULL);
	while (*(str + size))
		size++;
	word = (char *)malloc(sizeof(char) * (size + 1));
	if (word == NULL)
		return (NULL);
	for (x = 0; *(str + x); x++)
		*(word + x) = *(str + x);
	return (word);
}
