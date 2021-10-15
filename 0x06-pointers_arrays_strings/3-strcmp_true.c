#include "main.h"
/**
 * _strcmp - concant two string
 * @s1: string destin
 * @s2: string new
 * Return: INT 0=equals 0!=diferencias between s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, dif = 0;

	for (; *(s1 + x) && *(s2 + x); x++)
	{
		if (*(s1 + x) == *(s2 + x))
		{
			continue;
		}
		else
		{
			dif = ((*(s1 + x)) - (*(s2 + x)));
			break
		}
	}
	if ((s1[x] == '\0') || (s2[x] == '\0'))
    	{
        	return (dif);
    	}
    	if ((s1[x] == '\0') || (s2[x] == '\0'))
    	{
      		s1_acsii = s1[x];
		s2_acsii = s2[x];
		dif = s1_acsii - s2_acsii;
		if (dif < 0)
			dif = -1;
		else
			dif = 1;
	}
	return (dif);
}
