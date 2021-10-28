#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *string_nconcat - check the code
 *@s1: chaine 1
 *@s2: chaine 2
 *@n: taille max s2
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0, len_string = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	len_string += (n < len2) ? n : len1 + len2;
	string = malloc(sizeof(char) * (len_string));

	if (!string)
		return (NULL);

	while (i < len1)
		string[i] = s1[i], i++;
	len_string =(n < len2) ? (len1 + n) : (len1 + len2);
		while (i < (len_string))
			string[i++] = s2[j++];
	string[i] = '\0';
	return (string);
}
