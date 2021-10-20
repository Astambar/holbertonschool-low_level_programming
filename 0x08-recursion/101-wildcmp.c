#include "main.h"
/**
 * wildcmp - compare  match retourne 1 en cas de match et 0 dans le cas contraire
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if palindrome else 0
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
	return (*s2 != '\0' && *s2 == '*') ? (wildcmp(s1, s2 + 1)) : (*s2 == '\0');
}
if (*s2 == '*')
{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
return ((*s1 == *s2) ? (wildcmp(s1 + 1, s2 + 1)) : 0);
}

