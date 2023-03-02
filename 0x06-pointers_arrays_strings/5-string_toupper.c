#include "main.h"

/**
 * string_toupper - Converts all letters in a string to uppercase
 * @s: the string to capitalize
 *
 * Return: s - the capitalized string
 */

char *string_toupper(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= 'a' && s[len] <= 'z')
		{
			s[len] = s[len] - 32;
		}
		len++;
	}
	return (s);
}
