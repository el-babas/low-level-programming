#include "main.h"
/**
 * print_alphabet_x10 - use _putchar
 *
 * Return: 0 int
 */
int print_alphabet_x10(void)
{
	int letter, cont;

	/* Code ASCII "alphabet" */
	for (cont = 0; cont < 10; cont++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
	return (0);
}
