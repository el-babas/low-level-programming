#include "main.h"
/**
 * _puts - print string
 * @str: string
 * Return: length string
 */
void _puts(char *str)
{
	char letter;
	int len = 0;

	while (*(str + len) != '\0')
	{
		letter = *(str + len);
		_putchar(letter);
		len++;
	}
	_putchar('\n');
}
