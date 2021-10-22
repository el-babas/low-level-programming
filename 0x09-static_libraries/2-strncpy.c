#include "main.h"
/**
 * _strncpy - concant two string
 * @dest: string destin
 * @src: string new
 * @n: number of iterations
 * Return: char concantenates
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	/* se menor a n porque y(indice) comienza en 0*/
	while (x < n && *(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	for (; x < n; x++)
	{
		*(dest + x) = '\0';
	}
	return (dest);
}
