#include "main.h"
/**
 * _isalpha - use _putchar
 * @c: The character
 *
 * Return: 0 int
 */
int _isalpha(int c)
{
	/* Code ASCII "alphabet all" */
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
