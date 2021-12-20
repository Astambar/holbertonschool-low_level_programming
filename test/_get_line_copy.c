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
	write(2, str, _strlen(str));
	return (-1);
}

/**
* _fread - verif lecture du fichier
* @str: message error
* 
* Return: nombre d'octets
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

int my_fgetc(FILE *filename)
{
	unsigned char ch;

	return ((_fread(&ch, 1, filename) == 1) ? (int)ch : EOF);
}


static ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	int c = 0;
	char *new_ptr = NULL, *cur_pos = NULL;
	size_t count = 0;

	if (lineptr == NULL || n == NULL || stream == NULL)
		return (error_test("_getline()"));
	if (*lineptr == NULL)
	{
		*n = MALLOCSIZE, *lineptr = (char *)malloc(*n);
		if (*lineptr == NULL)
			return (error_test("malloc()"));
	}

	for (cur_pos = *lineptr; c != '\n';)
	{
		c = my_fgetc(stream);
		if (c == EOF)
			return (-1);
		if (++count > *n)
		{
			*n = (*n) * 2, new_ptr = (char *)realloc(*lineptr, *n);
			if (new_ptr == NULL)
				return (error_test("realloc()"));
		}
	}
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
