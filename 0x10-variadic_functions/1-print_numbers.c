#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator
 * @n: length
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args_int;

	if (separator != NULL)
	{
		va_start(args_int, n);
		printf("%i", va_arg(args_int, int));
		for (i = 1; i < n; i++)
			printf("%s%i", separator, va_arg(args_int, int));
		printf("\n");
		va_end(args_int);
	}
}
