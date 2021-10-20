#include "main.h"
/**
 * _pow_recursion - x raised to the power of y
 * @x: base
 * @y: exponente
 * Return: potencia
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
