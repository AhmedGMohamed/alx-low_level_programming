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
 * str_concat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: s3 - the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *s3;

	s1 == NULL ? len1 = 0 : (len1 = _strlen(s1));
	s2 == NULL ? len2 = 0 : (len2 = _strlen(s2));
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
	{
		return (s3);
	}
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		s3[i] = s2[j];
	}
	s3[i] = '\0';
	return (s3);
}
