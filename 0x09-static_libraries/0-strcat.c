#include "main.h"
/**
 * _strcat - concant two string
 * @dest: string destin
 * @src: string new
 * Return: char concantenates
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (*(dest + x))
	{
		x++;
	}
	while (*(src + y))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	return (dest);
}
