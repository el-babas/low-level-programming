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
	int x, prod = 1;

	if (argc == 3)
	{
		for (x = 1; x < argc; x++)
			prod *= atoi(argv[x]);
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
