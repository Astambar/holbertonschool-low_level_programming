#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - compte mes mots
 *
 * @str: toto
 * Return: int
 */
int word_count(char *str, char *separator)
{
	int word = 0, i = 0, j = 0 , matchsep = 0;

	for (; separator[j] != '\0'; j++)
		if (str[0] == separator[j])
			for (matchsep = 1; str[i] != '\0'; i++)
				for(j = 0; separator[j] != '\0' && separator[j] != str[i]; j++)
				;
			if()
		
	for (; *(str + i) != '\0'; i++)
		if (*(str + i) == ' ')
		{
			for (i = i; *(str + i) == ' '; i++)
			;
			word++;
		}
	return (word);
}

/**
 * **strtow- prints a grid of integers
 * @str: the address of the two dimensional grid
 * Return: Nothing.
 */

char **strtow(char *str)
{
	int i = 0, word = 0, j = 0, len_str = 0, len_word = 0;
	char **word_table;

	if (str == NULL || *str == '\0')
		return (NULL);
/*count words*/
word = word_count(str);
	if (word == 0)
		return (NULL);

	/* TABLE*/

	word_table = (char **) malloc(sizeof(char *) * (word + 2));
	if (word_table == NULL)
	{
		free(word_table);
		return (NULL);
	}
	for (i = 0; i < word; i++)
	{
		j = 0;
		if (*str == ' ')
			for (; *str == ' '; str++, len_str++)
			;
		len_word = 0;
		for (; str[len_str] != ' ' && str[len_str] != '\0'; len_word++, len_str++)
		;
		word_table[i] = (char *) malloc((2 + (sizeof(char) * len_word)));
		if (word_table[i] == NULL)
		{
		free(word_table[i]);
		return (NULL);
		}
		while (*str != ' ' && *str != '\0')
			word_table[i][j] = *str, j++, str++, len_str++;
		word_table[i][j] = '\0';
	}
	return (word_table);
}
