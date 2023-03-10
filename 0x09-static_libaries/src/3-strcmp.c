#include "main.h"

/**
 * _strcmp - compares two strings and returns a difference based value
 * @s1: array of characters (string)
 * @s2: array of character (string)
 *
 * Return: 0 if both strings are equal
 * s1[cnt] - s2[cnt] when the strings differ
 * where 'cnt' is the position of the first difference in characters
 */

int _strcmp(char *s1, char *s2)
{
	int cnt = 0;

	while (s1[cnt] != '\0' && s2[cnt] != '\0')
	{
		if (s1[cnt] > s2[cnt] || s1[cnt] < s2[cnt])
		{
			return (s1[cnt] - s2[cnt]);
		}
		cnt++;
	}
	if (s1[cnt] != '\0' || s2[cnt] != '\0')
	{
		return (s1[cnt] - s2[cnt]);
	}
	return (0);
}
