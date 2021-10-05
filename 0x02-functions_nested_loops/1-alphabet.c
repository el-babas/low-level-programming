#include "main.h"
/**
 * print_alphabet - use _putchar
 *
 * Return: 0 int
 */
int print_alphabet(void)
{
	int letter;

	/* Code ASCII "alphabet" */
	for (letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
