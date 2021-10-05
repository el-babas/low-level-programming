#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print n to 98
 * @n: begin
 *
 * Return: to 98
 */
void print_to_98(int n)
{
	int x, y;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x == 98)
				break;
			printf(", ");
		}
	}
	else
	{
		for (y = n; y >= 98; y--)
		{
			printf("%d", y);
			if (y == 98)
				break;
			printf(", ");
		}
	}
	printf("\n");
}
