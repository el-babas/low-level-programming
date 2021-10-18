#include "main.h"
/**
 * _strchr - busca un caracter e imprime desde esa posicion
 * @s: cadena de texto de entrada
 * @c: caracter a buscar
 * Return: cadena a partir de la busqueda
 */
char *_strchr(char *s, char c)
{
	int x, exists = 0;

	for (x = 0; *(s + x); x++)
	{
		if (*(s + x) == c)
		{
			exists = 1;
			break;
		}
	}
	if (exists == 0)
		return ('\0');
	else
		return (s + x);
}
