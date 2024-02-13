#include "main.h"

/**
 * read_textfile - reads a text file and prints its contents to standard output
 * @filename: a string containing the path to the text file to read
 * @letters: the amount of bytes to read from the text files
 *
 * Return: 0 if filename is NULL, if the file cannot be opened or if write
 * fails. otherwise returns the amount of bytes read from the text file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readBytes, writeBytes;
	char **buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	readBytes = read(fd, buf, letters);
	close(fd);
	writeBytes = write(STDOUT_FILENO, buf, readBytes);
	free(buf);
	if (writeBytes != readBytes || writeBytes == -1)
		return (0);
	return (writeBytes);
}
