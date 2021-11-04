#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: separator
 * @n: length
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args_cdn;
	char *cdn;

	if (n > 0)
	{
		va_start(args_cdn, n);
		for (i = 0; i < n; i++)
		{
			cdn = va_arg(args_cdn, char *);
			if (cdn == NULL)
				printf("(nil)");
			else
				printf("%s", cdn);
			if (i < (n - 1) && (separator != NULL))
				printf("%s", separator);
		}
		printf("\n");
		va_end(args_cdn);
	}
	else
	{
		printf("\n");
	}
}
