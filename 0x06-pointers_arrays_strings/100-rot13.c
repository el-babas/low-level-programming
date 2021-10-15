#include "main.h"
/**
 * rot13 - encodes a string
 * @s: string
 * Return: char encode
 */
char *rot13(char *s)
{
	int x, y;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; *(letters + y); y++)
		{
			if (*(s + x) == *(letters + y))
			{
				*(s + x) = *(rot13 + y);
				break;
			}
		}
	}
	return (s);
}
