#include "main.h"
/**
 * rev_string - print string reverse
 * @s: string
 */
void rev_string(char *s)
{
	char letter;
	int len1, len2, len3;

	len1 = len2 = 0;
	while (*(s + len1) != '\0')
	{
		len1++;
	}
	/*Solamente debemos recorrer hasta la mistad*/
	len3 = (len1 / 2);
	while (len3--)
	{
		len1--;
		letter = *(s + len1);
		*(s + len1) = *(s + len2);
		*(s + len2) = letter;
		len2++;
	}
}
