#include "main.h"
/**
* read_textfile - test
* @filename: test
* @letters: test
* Return: flemme
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
        	int fd;
	ssize_t len_read, len_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	len_read = read(fd, buffer, letters);
	close(fd);
	if (len_read == -1)
	{
		free(buffer);
		return (0);
	}
	len_write = write(STDOUT_FILENO, buffer, len_read);
	free(buffer);
	if (len_read != len_write)
		return (0);
	return (len_write);
}


