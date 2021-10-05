#include "main.h"
/**
 * _islower - use _putchar
 * @c: The character
 *
 * Return: 0 int
 */
int _islower(int c)
{
	/* Code ASCII "alphabet lowercase" */
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
