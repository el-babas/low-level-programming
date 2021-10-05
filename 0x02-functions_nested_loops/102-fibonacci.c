#include <stdio.h>
/**
 * main - sum
 *
 * Return: 0
 */
int main(void)
{
	int x, a, b, c;

	a = 0;
	b = 1;
	c = a + b;
	for (x = 1; x < 50; x++)
	{
		printf("%d, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", c);
	return (0);
}
