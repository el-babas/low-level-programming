#include "main.h"
/**
 * _strncat - concant two string
 * @dest: string destin
 * @src: string new
 * @n: number of iterations
 * Return: char concantenates
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (*(dest + x))
	{
		x++;
	}
	/* se menor a n porque y(indice) comienza en 0*/
	while (y < n && *(src + y))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	return (dest);
}
