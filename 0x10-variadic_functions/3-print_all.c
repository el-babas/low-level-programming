#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print all format
 * @format: args
 */
void print_all(const char * const format, ...)
{
	va_list all_args;
	unsigned int i = 0, j = 0, b = 0;
	char *_type = "cifs", *cdn;

	va_start(all_args, format);
	while (format != NULL && *(format + i))
	{
		j = 0;
		while (*(_type + j))
		{
			if (*(format + i) == *(_type + j))
			{
				b = 1;
				break;
			}
			j++;
		}
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(all_args, int));
				break;
			case 'i':
				printf("%i", va_arg(all_args, int));
				break;
			case 'f':
				printf("%f", va_arg(all_args, double));
				break;
			case 's':
				cdn = va_arg(all_args, char*), cdn = cdn ? cdn : "(nil)";
				printf("%s", cdn);
				break;
		}
		if (b == 1 && *(format + (i + 1)) != '\0')
			printf(", "), b = 0;
		i++;
	}
	printf("\n");
	va_end(all_args);
}
