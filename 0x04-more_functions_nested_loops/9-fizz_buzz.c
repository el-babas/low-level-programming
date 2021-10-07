#include <stdio.h>
/**
 * main - print multiples de 3 or 5
 * Return: 0
 */
int main(void)
{
	int cont = 1;

	printf("%d", cont);
	cont++;
	for (; cont <= 100; cont++)
	{
		if (cont % 3 == 0 && cont % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (cont % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (cont % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", cont);
		}
	}
	printf("\n");
	return (0);
}
