#include <stdlib.h>
/**
 * _calloc - llena todo de cero
 * @nmemb: longitud del contenido
 * @size: longitud de tipo de dato byte
 * Return: cadena
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *str;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	/* for (x = 0; x < nmemb; x++) */
	for (x = 0; x < (nmemb * size); x++)
		*(str + x) = 0;
	return (str);
}
