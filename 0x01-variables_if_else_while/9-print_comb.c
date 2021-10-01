#include <stdio.h>
/**
 * main - alpha
 *
 * Return: 0 int
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		if (num == 9)
		{
			putchar('\n');
		}
		num++;
	}
	return (0);
}
