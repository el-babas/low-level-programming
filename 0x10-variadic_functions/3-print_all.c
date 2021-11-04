#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print all format
 * @format: args
 */
void print_all(const char * const format, ...)
{
	va_list all_args;
	char *c;
	unsigned int i = 0;

	va_start(all_args, format);
	while (format != NULL && *(format + i))
	{

		i++;
	}
	printf("\n");
	va_end(all_args);
}
