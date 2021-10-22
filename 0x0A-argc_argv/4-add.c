#include <stdlib.h>
#include <stdio.h>
/**
 * main - funtion main
 * @argc: size array argv
 * @argv: array or paramethers
 * Return: 0 sucessfull !=0 error
 */
int main(int argc, char *argv[])
{
	int x, sum = 0, tmp;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			tmp = atoi(argv[x]);
			if (tmp == 0 && *argv[x] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[x]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
