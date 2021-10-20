#include "main.h"
#include "2-strlen_recursion.c"
int palindrome(char *s, int i, int j);
/**
 * is_palindrome - retourne 1 si c'est un palindrome  sinon 0
 * @s: number
 * Return: 1 if palindrome else 0
 */

int is_palindrome(char *s)
{
	int i;
	int j = 0;

	i = _strlen_recursion(s) - 1;
	return (palindrome(s, i, j));
}


/**
 * palindrome - function that returns 1 if a string is a palindrome else 0
 * @s: string
 * @i: from the end of the string
 * @j: from the start of the string
 * Return: 1 if palindrome else 0
 */

int palindrome(char *s, int i, int j)
{
	if (i > j)
	{
		return ((s[i] == s[j]) ? (palindrome(s, i - 1, j + 1)) : 0);
	}
	return (1);
}
