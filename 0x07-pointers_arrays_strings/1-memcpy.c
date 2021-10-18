#include "main.h"
/**
 * _memcpy - copia areas de espacio
 * @dest: string destino
 * @src: string area reemplazado
 * @n: size
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n && *(src + x); x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
