#include "main.h"

/**
 * _strlen - gets the length of a string
 * @str: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * append_text_to_file - Appends text to an existing file
 * @filename: a string containing the path and name of the file to append to
 * @text_content: the text content to fill the file with
 *
 * Return: 1 on success, otherwise returns -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (fd);
	if (text_content != NULL)
		len = _strlen(text_content);
	written = write(fd, text_content, len);
	if (written == -1)
		return (written);
	return (1);
}
