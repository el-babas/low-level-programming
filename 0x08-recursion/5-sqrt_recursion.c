#include "main.h"
/**
 * main_algorithm - algoritmo principal de raiz
 * @x: numero
 * @y: resta impar
 * Return: suma de valores
 */
int main_algorithm(int x, int y)
{
	int val;

	val = x - y;
	if (val < 0)
		return (-(y / 2) - 1);
	if (val == 0)
		return (1);
	else
		return (1 + main_algorithm(val, y + 2));
}
/**
 * _sqrt_recursion - raiz cuadrada natural
 * @n: number radicando
 * Return: resultado
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (main_algorithm(n, 1));
}
