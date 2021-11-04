#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sumar todos lo valores
 * @n: numeros a sumar
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list args_int;

	if (n == 0)
		return (0);

	va_start(args_int, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args_int, int);

	va_end(args_int);
	return (sum);
}
