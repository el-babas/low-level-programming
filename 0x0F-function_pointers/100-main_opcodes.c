#include <stdio.h>
#include <stdlib.h>
/**
 * main - imprimir hexadecimal de bytes
 * @argc: numero de argumentos
 * @argv: argumentos
 * Return: entero
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	/*int (*file)(int, char **) = main;*/
	char *file = (char *)main;
	/*char op_code;*/

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (x = 0; x < bytes; x++)
	{
		/*op_code = *(char *)file;*/
		/*printf("%02hhx", file[x]);*/
		printf("%02x", file[x] & 0XFF);
		if (x != bytes - 1)
			printf(" ");
		/*file++;*/
	}
	printf("\n");
	return (0);
}
