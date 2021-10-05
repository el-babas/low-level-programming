#include "main.h"
/**
 * print_times_table - use _putchar
 * @n: number times table
 */
void print_times_table(int n)
{
	int mu1, mu2, pr;

	if (n <= 15 && n >= 0)
	{
		for (mu1 = 0; mu1 <= n; mu1++)
		{
			_putchar('0');
			for (mu2 = 1; mu2 <= n; mu2++)
			{
				pr = mu1 * mu2;
				_putchar(',');
				_putchar(' ');
				if (pr <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(pr + '0');
				}
				else if (pr <= 99)
				{
					_putchar(' ');
					_putchar(pr / 10 + '0');
					_putchar(pr % 10 + '0');
				}
				else
				{
					_putchar(pr / 100 + '0');
					_putchar((pr % 100) / 10 + '0');
					_putchar(pr % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
