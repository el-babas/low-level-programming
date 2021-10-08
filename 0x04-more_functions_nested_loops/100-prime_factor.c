#include <stdio.h>
/**
 * main - prints the largest prime factor of the number
 * Return: 0
 */
int main(void)
{
	long int number = 612852475143;
	long int largest;
	long int factor = 2;

	while (factor <= number)
	{
		if (number % factor == 0)
		{
			number = number / factor;
			/*printf("%ld ", factor);*/
			largest = factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", largest);
	return (0);
}
