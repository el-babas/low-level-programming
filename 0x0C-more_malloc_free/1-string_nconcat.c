#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatena cadenas
 * @s1: cadena 1
 * @s2: cadena 2
 * @n: size
 * Return: cadena
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, len1 = 0, len2 = 0, x = 0, y = 0;
	char *str;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len2 > n)
		len2 = n;
	len = len1 + len2;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; *(s1 + x); x++)
	{
		*(str + y) = *(s1 + x);
		y++;
	}
	for (x = 0; x < len2 ; x++)
	{
		*(str + y) = *(s2 + x);
		y++;
	}
	*(str + y) = '\0';
	return (str);
}
