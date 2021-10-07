#include "main.h"
/**
 * _isdigit - Is Digit?
 * @c: number
 * Return: int
 */
int _isdigit(int c)
{
	/* Codigo ASCII 0-9 */
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
