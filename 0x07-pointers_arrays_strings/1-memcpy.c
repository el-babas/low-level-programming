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

	/*no se valida src puede estar null*/
	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
