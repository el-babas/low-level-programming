#include "main.h"
/**
 * _strlen_recursion - print length string
 * @s: string
 * Return: lenth string
 */
int _strlen_recursion(char *s)
{
	if (*(s) != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
