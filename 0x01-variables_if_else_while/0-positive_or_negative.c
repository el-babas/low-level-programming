#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - sign of the number
 *
 * Return: 0 int
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand();
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
