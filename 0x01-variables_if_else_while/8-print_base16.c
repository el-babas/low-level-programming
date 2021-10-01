#include <stdio.h>
/**
 * main - alpha
 *
 * Return: 0 int
 */
int main(void)
{
	char letter;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
		if (letter == 'f')
			putchar('\n');
	}
	return (0);
}
