#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: the string to check
 *
 * Return: n - the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcat - concatenates two strings
 * @dest: the string to append to
 * @src: the string to be appended
 *
 * Description: appends the string src to dest and puts
 * a null byte terminator at the end of dest
 * Return: dest - the final concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	len = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
