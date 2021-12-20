/**
 * strtow - splits a string into words.
 *
 * @str: String to splits
 *
 * Return: NULL is any problem, pointer to the new string else
 */
void _strtok(char *str, char *separator)
{
	int i, word, letter, k, j = 0;

	if (str == NULL || *str == '\0')
		return;
	if (separator == NULL)
		separator = " \n\r\t";

	word = _strcount_word(str, separator);
	if (word == 0)
		return;

	array_command = (char **)malloc(sizeof(char *) * (word + 1));
	if (array_command == NULL)
		return;

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
			return;
		}

		for (k = 0; k < letter - 1; k++, j++)
			array_command[i][k] = str[j];

		array_command[i][k] = '\0';
	}
	array_command[i] = NULL;
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

	while (_separator(*(str + i), separator) == -1 && *(s + i))
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
