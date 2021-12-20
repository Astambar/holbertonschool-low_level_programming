#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *_strtok(char *str, char *separator);
int _strlen_letter(char *s, char *separator);
int _separator(char str, char *separator);
int _strcount_word(char *str, char *separator);

/**
 * strtow - splits a string into words.
 *
 * @str: String to splits
 *
 * Return: NULL is any problem, pointer to the new string else
 */
char *_strtok(char *str, char *separator)
{
	int i, word, letter, k, j = 0;
	static char **array_command;
	if (str == NULL || *str == '\0')
		return (NULL);
	if(!*separator)
		separator = " \n\r\t";
	printf("==========================================\n");
	printf("======== test separator strtok START======\n");
	printf("==========================================\n");
	printf("Chaine debut%schaine fin\n", separator);
	printf("==========================================\n");
	printf("======== test separator strtok END======\n");
	printf("==========================================\n");
	word = _strcount_word(str, separator);
	printf("==========================================\n");
	printf("======== test word != 0 strtok START======\n");
	printf("==========================================\n");
	if (word == 0)
		return (NULL);
	printf("SUCCESS\n");
	printf("==========================================\n");
	printf("======== test word != 0 strtok END======\n");
	printf("==========================================\n");
	array_command = (char **)malloc(sizeof(char *) * (word + 1));
	printf("==========================================\n");
	printf("===test command != NULL strtok START===\n");
	printf("==========================================\n");
	if (array_command == NULL)
		return (NULL);
	printf("SUCCESS\n");
	printf("==========================================\n");
	printf("=== test command != NULL strtok END===\n");
	printf("==========================================\n");
	for (i = 0; i < word; i++)
	{
		while (_separator(*(str + i), separator) == 1)
			j++;

		letter = _strlen_letter(str + j, separator);

		array_command[i] = (char *)malloc(sizeof(char) * letter + 1);

		if (array_command[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(array_command[i]);
			free(array_command);
			return (NULL);
		}

		for (k = 0; k <= letter; k++, j++)
			array_command[i][k] = str[j];
		array_command[i][k] = '\0';
		printf("%s\n",*(array_command + i));
	}
	array_command[++i] = NULL;
	return (*(++array_command));
}

/**
 * _strlen_letter - Calculate length of a word
 *
 * @s: Word inputed
 *
 * Return: Length of the word
 */
int _strlen_letter(char *s, char *separator)
{
	int i = 0;

	while (_separator(*(s + i), separator) == -1 && *(s + i))
		i++;
	return (i);
}
int _separator(char str, char *separator)
{
	int i = 0;

	for (; separator[i]; i++)
		if (str == separator[i])
			return (1);
	return (-1);
}
/**
 * _strcount_word - Calculate the number of word
 *
 * @str: String inputed
 *
 * Return: The number of word
 */
int _strcount_word(char *str, char *separator)
{
	int i = 0, word_count = 0;

	for (i = 0; *(str + i); i++)
	{
		if (_separator(*(str + i), separator) == -1)
		{
			word_count++;
			i += _strlen_letter(str + i, separator);
		}
	}
	return (word_count);
}

int main ()
{
  char str[] ="test string.";
  char * test;
  test = strtok(str," ");
  printf("=========strtok origine test==========\n");
  while (test != NULL)
  {
    printf ("%s\n",test);
    test = strtok(NULL," ");
  }
  printf("\n=========_strtok origine test==========\n");
	test = _strtok(str," ");
 while (test != NULL)
  {
    printf ("%s\n",test);
    test = _strtok(NULL," ");
  }
  return 0;
}
