#include <stdio.h>
/**
 * main - Fibonacci to 98
 *
 * Return: Always 0.
 */
int main(void)
{
	int cont, isint, islong;
	long int n1, n2, re;
	long int nl1, nl2, rel;

	n1 = n2 = re = 1;
	cont = isint = islong = 1;
	printf("%ld", re);
	while (cont < 98)
	{
		if (isint == 1)
		{
			re = n1 + n2;
			printf(", %ld", re);
		}
		else
		{
			if (islong == 1)
			{
				/*Dividimos el numero en dos parte*/
				nl1 = n1 % 1000000000;
				nl2 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				islong = 0;
			}
			rel = nl1 + nl2;
			re = n1 + n2;
			printf(", %ld%ld", (re + (rel / 1000000000)), (re % 1000000000));
			nl1 = nl2;
			nl2 = rel % 1000000000;
		}
		n1 = n2;
		n2 = re;
		cont++;
		/*Verificamos si sale del limite de la variable*/
		if (((n1 + n2) < 0) || islong == 0)
			isint = 0;
	}
	printf("\n");
	return (0);
}
