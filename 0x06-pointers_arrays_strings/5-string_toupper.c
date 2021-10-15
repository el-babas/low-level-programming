#include "main.h"
/**
 * string_toupper - changes a uppercase
 * @str: string
 * Return: string uppercase
 */
char *string_toupper(char *str)
{
	int x, pos;

	for (x = 0; *(str + x); x++)
	{
		/*codigo ASCII a - z*/
		/*diferencia entre a y A = - 32 */
		pos = *(str + x);
		if (pos >= 97 && pos <= 122)
			*(str + x) = (*(str + x) - 32);
		else
			continue;
	}
	return (str);
}
