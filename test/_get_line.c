#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>


#define MALLOCSIZE 120
static ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
size_t _fread(void *buf, size_t count, FILE *filename);
int my_fgetc(FILE *filename);
int error_test(char *str);

/**
* error_test - default error
* @str: message error
* Return: -1
*/

int error_test(char *str)
{
	errno = EINVAL;
	perror(str);
	return (-1);
}


/**
* _fread - verif lecture du fichier
* @buf: buffer
* @count: taille maximal
* @filename: nom du fichier
* Return: le poids totals du fichier
*/

size_t _fread(void *buf, size_t count, FILE *filename)
{
	size_t bytes = 0;
	ssize_t readvalue;
	char *p = buf;

	for (; count; p += readvalue, bytes += readvalue, count -= readvalue)
	{
		readvalue = read(fileno(filename), p, count);
		if (readvalue == -1)
		{
			if (errno != EINTR && errno != EAGAIN)
				break;
		}
		else if (readvalue == 0)
			break;
	}

	return (bytes);
}

/**
* my_fgetc - Verifie la possibilité de lire le fichier
* @filename: nom  du fichier a tester
* Return: EOF en cas d'erreur de lecture sinon le caractère lu
*/
int my_fgetc(FILE *filename)
{
	unsigned char ch;

	return ((_fread(&ch, 1, filename) == 1) ? (int)ch : EOF);
}
/**
* _getlines - Verifie le nombre de caractère sur une ligne spécifique
* @stream: nom  du fichier a de travaille
* @size: taille minimal d'ube ligne
* @lineptr: stock les différente ligne du fichier en mêmoir
* Return: EOF en cas d'erreur de lecture sinon le caractère lu
*/
ssize_t _getlines(char **lineptr, size_t *size, FILE *stream)
{
	int c = 0;
	char *new_ptr = NULL, *cur_pos = NULL;
	size_t count = 0;

	if (lineptr == NULL || size == NULL || stream == NULL)
		return (error_test("_getline()"));
	if (*lineptr == NULL)
	{
		*size = MALLOCSIZE, *lineptr = (char *)malloc(*size);
		if (*lineptr == NULL)
			return (error_test("malloc()"));
	}

	for (cur_pos = *lineptr; c != '\n'; *cur_pos = (char)c, cur_pos++)
	{
		c = my_fgetc(stream);
		if (c == EOF)
			return (-1);
		if (++count > *size)
		{
			*size = (*size) * 2, new_ptr = (char *)_realloc(*lineptr, *size);
			if (new_ptr == NULL)
				return (error_test("realloc()"));
			cur_pos = new_ptr + (count), *lineptr = new_ptr;
		}
	}

	*cur_pos = '\0';
	return ((ssize_t)count);
}


int main(int argc, char *argv[])
{

	if (argc < 2)
	{
		fprintf(stderr, "Usage...\n");
		exit(1);
	}

	FILE *fp = NULL;
	char *linebuf = NULL;
	size_t linesize = 0;
	ssize_t size = 0;


	fp = fopen(argv[1], "r");

	if (fp == NULL)
	{
		perror("fopen()");
		exit(1);
	}

	while ((size = _getline(&linebuf, &linesize, fp)) >= 0)
	{
		fprintf(stdout, "Line count: %ld\n", size);
		fprintf(stdout, "Line size allocation: %ld\n", linesize);
	}

	free(linebuf);
	fclose(fp);

	exit(0);
}
