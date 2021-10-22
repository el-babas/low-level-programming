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
	int sum = 0, num = 0, tmp = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num > 0)
	{
		sum += num / 25;
		tmp = num % 25;
		sum += tmp / 10;
		tmp = tmp % 10;
		sum += tmp / 5;
		tmp = tmp % 5;
		sum += tmp / 2;
		tmp = tmp % 2;
		sum += tmp / 1;
	}
	printf("%d\n", sum);
	return (0);
}
