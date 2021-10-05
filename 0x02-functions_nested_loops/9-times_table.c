#include "main.h"
/**
 * times_table - use _putchar
 */
void times_table(void)
{
	int mu1, mu2, pr;

	for (mu1 = 0; mu1 <= 9; mu1++)
	{
		_putchar('0');
		for (mu2 = 1; mu2 <= 9; mu2++)
		{
			pr = mu1 * mu2;
			_putchar(',');
			_putchar(' ');
			if (pr <= 9)
			{
				_putchar(' ');
				_putchar(pr + '0');
			}
			else
			{
				_putchar(pr / 10 + '0');
				_putchar(pr % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
