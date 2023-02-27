#include "main.h"

/**
 * rev_string - Reverses a given array of characters (string)
 * @s: the array of characters (string) to reverse
 */

void rev_string(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;

	for (i = 0; i < len / 2; i++)
	{
		char temp;

		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
	}
}
