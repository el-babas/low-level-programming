#include "main.h"
/**
 * _strchr - busca un caracter e imprime desde esa posicion
 * @s: cadena de texto de entrada
 * @c: caracter a buscar
 * Return: cadena a partir de la busqueda
 */
char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; *(s + x); x++)
	{
		if (*(s + x) == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
