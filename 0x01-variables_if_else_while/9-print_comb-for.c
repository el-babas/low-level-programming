#include <stdio.h>
/**
 * main - alpha
 *
 * Return: 0 int
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		if (num == 9)
			putchar('\n');
	}
	return (0);
}
