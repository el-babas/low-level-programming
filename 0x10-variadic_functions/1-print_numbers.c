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

	if (n > 0)
	{
		va_start(args_int, n);
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(args_int, int));
			if (i < (n - 1) && (separator != NULL))
				printf("%s", separator);
		}
		printf("\n");
		va_end(args_int);
	}
	else
	{
		printf("\n");
	}
}
