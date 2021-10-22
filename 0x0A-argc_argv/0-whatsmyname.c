#include <stdio.h>
/**
 * main - funtion main
 * @argc: size array argv
 * @argv: array or paramethers
 * Return: 0 sucessfull !=0 error
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
