#include "main.h"
/**
 * binary_to_uint - function that converts a binary number
 * @b: binary
 * Return: number dec
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int len = 0, base = 1;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (len = len - 1; len >= 0; len--)
	{
		/* ASCII 48 = '0' and 49 '1'*/
		if (b[len] == 48 || b[len] == 49)
		{
			/* it only counts the 1 */
			if (b[len] == '1')
				number = number + base;
			/* mult in base binary  (basa * 2)*/
			base = base * 2;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
