#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - calculadora
 * @argc: numero de argumentos
 * @argv: parametros
 * Return: Calculadora resultado
 */
int main(int argc, char *argv[])
{
	int result;
	int (*calculator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	calculator = get_op_func(argv[2]);
	/* no encontro el operador*/
	if (calculator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = calculator(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
