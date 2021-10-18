#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: cadena en la que se busca
 * @accept: cadena buscada
 * Return: longiud de cadena que contiene @accept de @s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; *(accept + y); y++)
		{
			if (*(accept + y) == *(s + x))
			{
				break;
			}
		}
		if (*(accept + y) == '\0')
		{
			break;
		}
	}
	return (x);
}
