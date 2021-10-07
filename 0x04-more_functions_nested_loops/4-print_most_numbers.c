#include "main.h"
/**
 * print_most_numbers - Print number
 */
void print_most_numbers(void)
{
	int n;

	/* Codigo ASCII 0-9 */
	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
			_putchar(n);
	}
	_putchar('\n');
}
