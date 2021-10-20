#include "main.h"
/**
 * _puts_recursion - print string
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_putchar(*(s));
		s++;
		_puts_recursion(s);
	}
	else
	{
		/*salto de linea ASCCI*/
		_putchar(10);
	}
}
