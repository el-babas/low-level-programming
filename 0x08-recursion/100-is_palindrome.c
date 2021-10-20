#include "main.h"
/**
 * _strlen_recursion - print length string
 * @s: string
 * Return: lenth string
 */
int _strlen_recursion(char *s)
{
	if (*(s) != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * main_algorithm - algoritmo principal de palindromo
 * @s: cadena
 * @x: posicion inicial
 * @y: posicion final
 * Return: resultado 0 no palindromo 1 palindromo
 */
int main_algorithm(char *s, int x, int y)
{

	if (*(s + x) == *(s + y))
	{
		if (x == y || (x + 1) == y)
			return (1);
		return (0 + main_algorithm(s, x + 1, y - 1));
	}
	return (0);
}
/**
 * is_palindrome - verifica si es numero primo
 * @s: cadena
 * Return: resultado 0 no palindromo 1 palindromo
 */
int is_palindrome(char *s)
{
	if (*(s) == '\0')
		return (0);
	return (main_algorithm(s, 0, (_strlen_recursion(s) - 1)));
}
