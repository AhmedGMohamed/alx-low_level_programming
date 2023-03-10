#include "main.h"

/**
 * cap_string - Capitalizes the first of each word in a string
 * @s: the string to capitalize
 *
 * Return: s - the capitalized string
 */

char *cap_string(char *s)
{
	int len = 0, cap = 0;

	if (s[len] >= 'a' && s[len] <= 'z')
	{
		s[len] = s[len] - 32;
	}

	while (s[len] != '\0')
	{
		switch (s[len])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				cap = 1;
				break;
		}
		if (s[len + 1] >= 'a' && s[len + 1] <= 'z' && cap == 1)
		{
			s[len + 1] = s[len + 1] - 32;
		}
		len++, cap = 0;
	}
	return (s);
}
