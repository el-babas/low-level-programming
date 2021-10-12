#include "main.h"
/**
 * print_rev - print string reverse
 * @s: string
 */
void print_rev(char *s)
{
	char letter;
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (len--)
	{
		letter = *(s + len);
		_putchar(letter);
	}
	_putchar('\n');
}
