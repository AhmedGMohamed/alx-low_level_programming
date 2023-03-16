#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Finds the length of a string
 * @s: the string to check
 *
 * Return: len - the length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * string_nconcat - concatenates first string with (n) bytes from string 2
 * @s1: the first string
 * @s2: the second string
 * @n: the number of characters to concatenate from s2
 *
 * Return: s3 - the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, offset;
	char *s3;

	len1 = _strlen(s1), len2 = _strlen(s2);
	if (n >= len2)
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		s3 = malloc(sizeof(char) * (len1 + n + 1));
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	offset = i;
	for (i = 0; i <= n && i <= len2; i++)
		s3[offset + i] = s2[i];
	return (s3);
}
