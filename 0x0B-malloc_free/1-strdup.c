#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplica cadena
 * @str: cadena a duplicar
 * Return: cadena duplicada
 */
char *_strdup(char *str)
{
	unsigned int x;
	char *word;

	if (str == NULL)
		return (NULL);
	word = malloc(sizeof(str));
	if (word == NULL)
		return (NULL);
	for (x = 0; *(str + x); x++)
		*(word + x) = *(str + x);
	return (word);
}
