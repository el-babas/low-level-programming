#include "main.h"
/**
 * print_last_digit - use _putchar
 * @n: The character
 *
 * Return: 0 int
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (n <= 0)
	{
		_putchar(-ld + '0');
		return (-ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
}
