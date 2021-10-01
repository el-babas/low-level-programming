#include <stdlib.h>
#include <stdio.h>
/**
 * main - alpha
 *
 * Return: 0 int
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		if (letter == 'a')
		{
			putchar('\n');
		}
		letter--;
	}
	return (0);
}
