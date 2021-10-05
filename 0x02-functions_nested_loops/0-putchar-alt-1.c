#include "main.h"
/**
 * main - use _putchar
 *
 * Return: 0 int
 */
int main(void)
{
	/* Code ASCII "_putchar" */
	int cdn[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, size;

	/* 8 length */
	size = sizeof(cdn) / sizeof(int);
	for (count = 0; count < size; count++)
	{
		_putchar(cdn[count]);
	}
	_putchar('\n');
	return (0);
}
