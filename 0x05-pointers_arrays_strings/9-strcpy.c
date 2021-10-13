#include "main.h"
/**
 * _strcpy - duplicate array
 * @dest: copy
 * @src: original
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (x >= 0)
	{
		*(dest + x) = *(src + x);
		if (*(src + x) == '\0')
			break;
		x++;
	}
	return (dest);
}
