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
		if (letter != 'q' || letter != 'e')
			putchar(letter);
		if (letter == 'z')
			putchar('\n');
	}
	return (0);
}
