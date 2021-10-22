#include "main.h"
/**
 * _strpbrk - optiene la posicion de la primera igualdad de s en accept
 * @s: cadena en la que se busca
 * @accept: cadena buscada
 * Return: cadena que contiene @accept de @s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; *(accept + y); y++)
		{
			if (*(accept + y) == *(s + x))
			{
				return (s + x);
			}
		}
	}
	return ('\0');
}
