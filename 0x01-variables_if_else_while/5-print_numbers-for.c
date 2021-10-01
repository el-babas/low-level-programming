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
		printf("%d", num);
		if (num == 9)
			printf("\n");
	}
	return (0);
}
