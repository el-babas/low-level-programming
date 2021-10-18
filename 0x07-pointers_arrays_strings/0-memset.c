#include "main.h"
/**
 * _memset - fills memoty with a constant byte
 * @s: string
 * @b: character
 * @n: size
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	/*no se pone la condicion *(s + x) porque puede estar null*/
	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
