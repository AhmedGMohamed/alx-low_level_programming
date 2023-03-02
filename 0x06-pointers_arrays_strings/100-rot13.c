#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string in rot13 encoding
 * @s: the string to encode
 *
 * Return: s - the encoded string
 */

char *rot13(char *s)
{
	int i = 0, j, ch;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z' && s[i] - 'a' < 13) ||
			(s[i] >= 'A' && s[i] <= 'Z' && s[i] - 'A' < 13))
		{
			s[i] = s[i] + 13;
			i++;
			continue;
		}
		ch = s[i];
		for (j = 'A'; ch >= 'A' && ch <= 'z' && s[i] - 12 != j; j++)
		{
			ch = j;
		}
		s[i] = ch;
		i++;
	}
	return (s);
}
