#include <stdio.h>
/**
 * main - sum
 *
 * Return: 0
 */
int main(void)
{
	long x, a, b, c;

	a = 0;
	b = 1;
	c = a + b;
	for (x = 1; x < 50; x++)
	{
		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld\n", c);
	return (0);
}
