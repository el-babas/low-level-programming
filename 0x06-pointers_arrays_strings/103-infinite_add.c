#include "main.h"
/**
 * infinite_add - sum array string
 * @n1: string 1
 * @n2: string 2
 * @r: string result sum
 * @size_r: size *r
 * Return: return string sum *r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ln1 = 0, ln2 = 0, lsz = 0, num1 = 0, num2 = 0, temp = 0;

	while (*(n1 + ln1))
		ln1++;
	while (*(n2 + ln2))
		ln2++;
	if (ln1 >= ln2)
		lsz = ln1;
	else
		lsz = ln2;
	if ((lsz + 1) >= size_r)
		return (0);
	/*Limpiamos la cadena*/
	*(r + (lsz + 1)) = '\0';
	/*Apuntamos al final*/
	ln1--, ln2--, size_r--;
	for (; lsz >= -1; lsz--)
	{
		num1 = num2 = 0;
		if (ln1 >= 0)
		{
			num1 = (*(n1 + ln1) - 48);
			ln1--;
		}
		if (ln2 >= 0)
		{
			num2 = (*(n2 + ln2) - 48);
			ln2--;
		}
		*(r + lsz) = ((num1 + num2 + temp) % 10) + 48;
		temp = (num1 + num2 + temp) / 10;
	}
	if (*r == 48)
		return (r + 1);
	else
		return (r);
}
