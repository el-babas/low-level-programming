#include "main.h"
/**
 * _isupper - Is Upper?
 * @c: number
 * Return: int
 */
int _isupper(int c)
{
	/* Codigo ASCII A-Z */
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
