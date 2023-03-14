#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Finds the length of a string
 * @str: the string to check
 *
 * Return: len - the length of the string
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
 * _strdup - creates a copy of a given string
 * @str: the string to copy
 *
 * Return: cpy - the copied string
 */
char *_strdup(char *str)
{
	int len, i;
	char *cpy;

	if (str == NULL)
	{
		return (str);
	}
	len = _strlen(str);
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
	{
		return (cpy);
	}
	for (i = 0; i <= len; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
}
