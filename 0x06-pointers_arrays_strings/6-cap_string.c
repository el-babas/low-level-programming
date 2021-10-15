#include "main.h"
/**
 * cap_string - changes a uppercase separators words
 * @str: string
 * Return: string uppercase
 */
char *cap_string(char *str)
{
	/*ASCII ' ', 'tab', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'*/
	int sep_words[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int x, y, pos, upper;

	upper = 0;
	for (x = 0; *(str + x); x++)
	{
		pos = *(str + x);
		/*codigo ASCII a - z*/
		/*diferencia entre a y A = - 32 */
		if ((x == 0 || upper == 1) && (pos >= 97 && pos <= 122))
			*(str + x) = (*(str + x) - 32);

		/*comparamos*/
		for (y = 0; y < 13; y++)
		{
			if (pos == sep_words[y])
			{
				upper = 1;
				break;
			}
			else
			{
				upper = 0;
			}
		}
	}
	return (str);
}
