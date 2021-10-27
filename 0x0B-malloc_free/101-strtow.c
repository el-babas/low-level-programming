#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - desconcatena cadena
 * @str: cadena madre
 * Return: cadenas separadas
 */
char **strtow(char *str)
{
	int x, y, z, l, pos, count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (z = 0; *(str + z); z++)
		if (*(str + z) != ' ' && (*(str + z + 1) == ' ' || *(str + z + 1) == '\0'))
			count++;
	words = (char **)malloc(sizeof(char *) * (count + 1));
	if (count == 0 || words == NULL)
	{
		free(words);
		return (NULL);
	}
	for (x = z = 0; x < count; x++)
	{
		for (y = z; *(str + y); y++)
		{
			if (*(str + y) == ' ')
				z++;
			if (*(str + y) != ' ' && (*(str + y + 1) == ' ' || *(str + y + 1) == '\0'))
			{
				*(words + x) = (char *)malloc(sizeof(char) * (y - z + 2));
				if (*(words + x) == NULL)
				{
					for (l = x; l >= 0; l--)
						free(*(words + x));
					free(words);
					return (NULL);
				}
				break;
			}
		}
		for (pos = 0; z <= y; pos++, z++)
			words[x][pos] = *(str + z);
		words[x][pos] = '\0';
	}
	*(words + x) = NULL;
	return (words);
}
