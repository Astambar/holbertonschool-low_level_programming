#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	unsigned int i = 0, j = 0, len_s1 = 0, len_s2 = 0, len_string = 0;
	if(s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1 && s1[len_s1])
		len_s1++;
	while (s2 && s2[len_s2])
		len_s2++;
	len_string = (n < len_s2) ? (len_s1 + n) : (len_s1 + len_s2);
	if(len_string == 0)
		return (NULL);
	string =  malloc(sizeof(char) * (len_string + 6));

	if (!string)
	{
		return (NULL);
	}

	for (; i < len_s1; i++)
		string[i] = s1[i];


	for (; i < (len_string); i++)
		string[i] = s2[j++];
	string[i] = '\0';

	return (string);
}
