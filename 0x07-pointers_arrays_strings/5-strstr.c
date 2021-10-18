#include "main.h"
/**
 * _strstr - optiene la posicion de la primera igualdad de needle en haystack
 * @haystack: cadena en la que se busca
 * @needle: cadena buscada
 * Return: cadena
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int x, y;

	for (x = 0; *(needle + x); x++)
	{
		for (y = 0; *(haystack + y); y++)
		{
			if (*(haystack + y) == *(needle + x))
			{
				return (haystack + y);
			}
		}
	}
	return ('\0');
}
