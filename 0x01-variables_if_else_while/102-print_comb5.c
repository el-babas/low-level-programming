#include <stdio.h>
/**
 * main - alpha
 *
 * Return: 0 int
 */
int main(void)
{
int num1, num2, num3, num4, temp1, temp2;

num1 = num2 = num3 = num4 = 0;
while (num1 <= 9)
{
	num2 = 0;
	while (num2 <= 9)
	{
		num3 = 0;
		while (num3 <= 9)
		{
			num4 = 0;
			while (num4 <= 9)
			{
				temp1 = (num1 * 10) + num2;
				temp2 = (num3 * 10) + num4;
				if (temp1 < temp2)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(num3 + '0');
					putchar(num4 + '0');
					if (num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9)
					{
						putchar('\n');
					}
					putchar(',');
					putchar(' ');
				}
				num4++;
			}
			num3++;
		}
		num2++;
	}
	num1++;
}
return (0);
}
