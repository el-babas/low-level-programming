#include "main.h"
/**
 * leet - changes a letters for number
 * @str: string
 * Return: string
 */
char *leet(char *str)
{
	/* En codigo ASCII */
	int letter[5] = {97, 101, 111, 116, 108};
	int number[5] = {52, 51, 48, 55, 49};
	int x, y, pos;

	for (x = 0; *(str + x); x++)
	{
		pos = *(str + x);
		/*codigo ASCII a - z*/
		/*diferencia entre a y A = - 32 */
		/*comparamos*/
		for (y = 0; y < 5; y++)
		{
			if (pos == letter[y] || pos == (letter[y] - 32))
			{
				*(str + x) = number[y];
				break;
			}
		}
	}
	return (str);
}
