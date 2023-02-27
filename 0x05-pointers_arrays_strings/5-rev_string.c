#include "main.h"

/**
 * rev_string - Reverses a given array of characters (string)
 * @s: the array of characters (string) to reverse
 */

void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	int, limit = len / 2;

	for (i = 0; i < limit; i++, len--)
	{
		char temp;

		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	}
}
