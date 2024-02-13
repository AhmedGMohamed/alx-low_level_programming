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
	 
	 while(str[len] != '\0')
		 len++;
	return(len);
 }

/**
 * create_file - creates and fils a file/truncates if the file already exists
 * @filename: a string containing the path and name of the file to create
 * @text_content: the text content to fill the file with
 *
 * Return: 1 on success, otherwise returns -1
 */
 int create_file(const char *filename, char *text_content)
 {
	int fd, len = 0, written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (fd);
	if (text_content != NULL)
		len = _strlen(text_content);
 	written = write(fd, text_content, len);
	if (written == -1)
		return (written);
	return (1);
 }
