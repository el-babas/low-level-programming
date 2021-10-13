#include "main.h"
/**
 * puts_half - length
 * @str: string
 * Return: length string
 */
void puts_half(char *str)
{
	int len = 0;
	int half = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len + 1) / 2;
	}
	for (; half < len; half++)
	{
		_putchar(*(str + half));
	}
	_putchar('\n');
}
