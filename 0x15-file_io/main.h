#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int _putchar(char);
int _strlen(char *);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *textcontent);
int append_text_to_file(const char *filename, char *textcontent);
#endif
