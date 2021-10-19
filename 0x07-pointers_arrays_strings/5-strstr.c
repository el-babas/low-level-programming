#include "main.h"
/**
 * _strstr - optiene la posicion de la primera igualdad de needle en haystack
 * @haystack: cadena en la que se busca
 * @needle: cadena buscada
 * Return: cadena
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int x, xx, y, equal;

	if (*(needle) == '\0')
	{
		return (haystack);
	}
	for (x = 0; *(haystack + x); x++)
	{
		equal = 0;
		xx = x;
		for (y = 0; *(needle + y) && *(haystack + xx); y++)
		{
			if (*(haystack + xx) == *(needle + y))
			{
				equal = 1;
				xx++;
			}
			else
			{
				break;
			}
		}
		if (equal == 1 && *(needle + y) == '\0')
		{
			return (haystack + x);
		}
	}
	return ('\0');
}
