#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - imprimir nombre
 * @name: nombre
 * @f: funcion a usar
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
