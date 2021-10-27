
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr- prints a grid of integers
 * @ac: the address of the two dimensional grid
 * @av: width of the grid
 * Return: Nothing.
 */

char **strtow(char *str)
{
	int i = 0, word = 0, j = 0, len_str = 0, len_word = 0;
	char **word_table;
	if(str == NULL || *str == '\0')
	{
		return (NULL);
	}
/**
 * count words
 */
	if (*(str + 0) == ' ')
	{
		for (i = i; *(str + i) == ' '; i++)
		{
		}
	}
	for(i = i; *(str + i) != '\0'; i++)
	{
		if(*(str + i) == ' ')
		{
			for(i = i; *(str + i) == ' '; i++)
			{
			}
		word++;
		}
	}
	/**
	 * TABLE
	 */

	word_table = (char **) malloc(sizeof(char *) * (word + 1));
	if (word_table == NULL)
	{
		free(word_table);
		return (NULL);
	}
	for(i = 0; i < word; i++)
	{
		j = 0;
		if(*str == ' ')
		{
			while(*str == ' ')
			{
				str++;
				len_str++;
			}
		}
		len_word = 0;
	while(str[len_str] != ' ' && str[len_str] != '\0')
	{
		len_word++;
		len_str++;
	}
	word_table[i] = (char *) malloc(sizeof(char) * (len_word + 1));
	if(word_table[i] == NULL)
	{
		free(word_table[i]);
		return (NULL);
	}
		while(*str != ' ' && *str != '\0')
		{
			word_table[i][j] = *str;
			j++;
			str++;
		}
		word_table[i][j] = '\0';
	}
	return (word_table);
}