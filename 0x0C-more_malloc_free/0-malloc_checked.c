#include <stdlib.h>
/**
 * malloc_checked - validar si hay espacio
 * @b: size de cadena
 * Return: cadena
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
