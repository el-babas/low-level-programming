#include <stdio.h>
/**
 * main - sum
 *
 * Return: 0
 */
int main(void)
{
	long a, b, c;

	a = 2;
	b = 4;
	c = a + b;
	printf("%ld, %ld, %ld", a, b, c);
	while (c <= 4000000)
	{
		a = b;
		b = c;
		c = a + b;
		if (c > 4000000)
			break;
		printf(", %ld", c);
	}
	printf("\n");
	return (0);
}
