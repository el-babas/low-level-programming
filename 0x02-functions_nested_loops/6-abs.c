#include "main.h"
/**
 * _abs - use _putchar
 * @n: The character
 *
 * Return: 0 int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	return (0);
}
