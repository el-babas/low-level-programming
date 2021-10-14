#include "main.h"
/**
 * _atoi - Convert string int
 * @s: string
 * Return: number
 */
int _atoi(char *s)
{
	unsigned int count = 0, dec = 1, pos = 0, num = 0, sign = 1, x;

	while (*(s + count) != '\0')
	{
		/* Signos mas se anulan +*+=+ */
		if (*(s + count) == '-' && dec == 1)
			sign = -(sign);
		/* Caracteres ASCII 0 - 9 */
		if (*(s + count) >= 48 && *(s + count) <= 57)
		{
			dec *= 10;
			if (dec == 10)
				pos = count;
		}
		else if (dec >= 10)
		{
			break;
		}
		count++;
	}
	if (dec == 1)
		return (0);
	for (x = 10; x <= dec; x *= 10)
	{
		num = num + ((*(s + pos) - 48) * (dec / x));
		pos++;
	}
	return (num * sign);
}
