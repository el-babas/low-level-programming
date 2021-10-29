#include <stdlib.h>
/**
 * _realloc - reasignar memoria de un puntero existente
 * @ptr: cadena anterior
 * @old_size: tamaño anterior
 * @new_size: tamaño nuevo
 * Return: puntero a la nueva asignacion
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
