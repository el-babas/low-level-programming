#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatena cadena
 * @s1: cadena 1
 * @s2: cadena 2
 * Return: cadena concatenada
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int x, size = 0;
	char *word;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; *(s1 + x); x++)
		size++;
	for (x = 0; *(s2 + x); x++)
		size++;
	word = (char *)malloc(sizeof(char) * (size + 1));
	if (word == NULL)
		return (NULL);
	size = 0;
	for (x = 0; *(s1 + x); x++)
	{
		*(word + size) = *(s1 + x);
		size++;
	}
	for (x = 0; *(s2 + x); x++)
	{
		*(word + size) = *(s2 + x);
		size++;
	}
	return (word);
}
