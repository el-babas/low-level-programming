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
	unsigned int x, y;
	char *str;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	n = (strlen(s2) > n) ? n : strlen(s2);
	str = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (x = y = 0; *(s1 + x); x++)
	{
		*(str + y) = *(s1 + x);
		y++;
	}
	for (x = 0; x < n && *(s2 + x) != '\0'; x++)
	{
		*(str + y) = *(s2 + x);
		y++;
	}
	*(str + y) = '\0';
	return (str);
}
