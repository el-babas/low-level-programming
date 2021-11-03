#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - sumar a y b
 * @a: num 1
 * @b: num 2
 * Return: resultado
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - restar a y b
 * @a: num 1
 * @b: num 2
 * Return: resultado
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplicar a y b
 * @a: num 1
 * @b: num 2
 * Return: resultado
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - dividir a y b
 * @a: num 1
 * @b: num 2
 * Return: resultado
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo a y b
 * @a: num 1
 * @b: num 2
 * Return: resultado
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
