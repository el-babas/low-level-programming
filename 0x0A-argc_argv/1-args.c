#include <stdio.h>
/**
 * main - funtion main
 * @argc: size array argv
 * @argv: array or paramethers
 * Return: 0 sucessfull !=0 error
 */
int main(int argc, char *argv[])
{
	if (*argv[0] != '\0')
		printf("%d\n", argc - 1);
	return (0);
}
