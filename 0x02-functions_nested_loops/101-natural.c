#include <stdio.h>
/**
 * main - sum
 *
 * Return: 0
 */
int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
