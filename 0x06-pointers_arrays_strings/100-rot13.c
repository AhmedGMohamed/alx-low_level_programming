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
 * rot13 - encodes a string in rot13 encoding
 * @s: the string to encode
 *
 * Return: s - the encoded string
 */

char *rot13(char *s)
{
	int i, len;

	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z' && s[i] - 'a' < 13) ||
			(s[i] >= 'A' && s[i] <= 'Z' && s[i] - 'A' < 13))
		{
			s[i] = s[i] + 13;
		}
		else if ((s[i] >= 'a' && s[i] <= 'z' && s[i] - 'a' >= 13) ||
			(s[i] >= 'A' && s[i] <= 'Z' && s[i] - 'A' >= 13))
		{
			s[i] = s[i] - 13;
		}
	}
	return (s);
}
