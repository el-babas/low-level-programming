#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - funtion main
 * @argc: size array argv
 * @argv: array or paramethers
 * Return: 0 sucessfull !=0 error
 */
int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; *(argv[x] + y); y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
