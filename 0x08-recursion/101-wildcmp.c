#include "main.h"
/**
 * wildcmp - comodin del asteristico
 * @s1: cadena 1
 * @s2: cadena 2
 * Return: 1 equal 0 different
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == 0 && *s2 == 42)
		return (wildcmp(s1, s2 + 1));
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == 42 && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)) && *s1 != 0)
		return (1);
	return (0);
}
