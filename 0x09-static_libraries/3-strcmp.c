#include "main.h"
/**
 * _strcmp - concant two string
 * @s1: string destin
 * @s2: string new
 * Return: INT 0=equals 0!=diferencias between s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	for (; *(s1 + x) && *(s2 + x); x++)
	{
		if (*(s1 + x) == *(s2 + x))
			continue;
		else
			return ((*(s1 + x)) - (*(s2 + x)));
	}
	return (0);
}
