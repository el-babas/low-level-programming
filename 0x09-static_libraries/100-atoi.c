#include "main.h"
/**
 * _atoi - Convert string int
 * @s: string
 * Return: number
 */
int _atoi(char *s)
{
	unsigned int count = 0, dec = 0, pos = 0, num = 0, sign = 1, x;

	while (*(s + count) != '\0')
	{
		/* Signos mas se anulan +*+=+ */
		if (*(s + count) == '-' && dec == 0)
			sign = -(sign);
		/* Caracteres ASCII 0 - 9 */
		if (*(s + count) >= 48 && *(s + count) <= 57)
		{
			if (dec == 0)
			{
				dec = 1;
				pos = count;
			}
			else
			{
				dec = dec * 10;
			}
		}
		else if (dec > 1)
		{
			break;
		}
		count++;
	}
	if (dec == 0)
		return (0);
	for (x = 1; x <= dec; x *= 10)
	{
		num = num + ((*(s + pos) - 48) * (dec / x));
		pos++;
	}
	return (num * sign);
}
