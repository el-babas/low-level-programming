#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - escoge la funcion
 * @s: nombre del operador
 * Return: devulve la funcion a usar
 */
int (*get_op_func(char *s))(int, int)
{
	int x = 0;
	op_t op_fun[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};

	while (x < 5)
	{
		if (s[0] == op_fun[x].op[0])
			return (op_fun[x].f);
		x++;
	}
	return (NULL);
}
