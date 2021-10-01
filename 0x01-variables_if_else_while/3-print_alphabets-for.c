#include <stdio.h>
/**
 * main - alpha
 *
 * Return: 0 int
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
		if (letter == 'Z')
			putchar('\n');
	}
	return (0);
}
