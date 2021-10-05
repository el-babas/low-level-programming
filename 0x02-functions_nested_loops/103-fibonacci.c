#include <stdio.h>
/**
 * main - sum
 *
 * Return: 0
 */
int main(void)
{
	long a, b, c = 0, sum = 0;

	a = 1;
	b = 2;
	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if ((a % 2) == 0)
			sum = sum + a;
	}
	printf("%ld\n", sum);
	return (0);
}
