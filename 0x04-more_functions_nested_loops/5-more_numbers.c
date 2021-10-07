#include "main.h"
/**
 * more_numbers - Print number for 10 0-14
 */
void more_numbers(void)
{
	int n, c;

	for (c = 1; c <= 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
