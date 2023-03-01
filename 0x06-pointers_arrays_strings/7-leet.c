#include "main.h"

/**
 * leet - encodes a string into simplified 1337
 * @s: a pointer the string
 *
 * Return: s - the encoded string
 */

char *leet(char *s)
{
	char enc[17] = "aA4eE3oO0tT7lL1";
	int len = 0, i;

	while (s[len] != '\0')
	{
		for (i = 0; i < 15; i = i + 3)
		{
			if (s[len] == enc[i] || s[len] == enc[i + 1])
			{
				s[len] = enc[i + 2];
			}
		}
		len++;
	}
	return (s);
}
