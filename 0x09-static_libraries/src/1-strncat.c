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
 * _strncat - concatenates two strings
 * @dest: the string to append to
 * @src: the string to be appended
 * @n: the max ammount of characters to append
 *
 * Description: appends at most n characters from src to dest
 * Return: dest - the final appended string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
