#include "main.h"
/**
  * _strlen - finds the length of a string (0-index based)
  * @s: the string to check
  *
  * Return: l - the length of the string (0-index based)
  */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l - 1);
}
/**
 * _strstr - Locate first occurrence of the substring 'needle' in 'haystack'
 * @haystack: the string to check
 * @needle: the substring to find
 *
 * Return: c - a pointer to the first occurrence of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len1, len2, found;
	char *c = 0;

	len1 = _strlen(haystack);
	len2 = _strlen(needle);
	for (i = 0; i < len1; i++)
	{
		found = 1;
		for (j = 0; j < len2 && i + len2 < len1; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				found = 0;
				break;
			}
		}
		if (found)
		{
			c = &haystack[i];
			return (c);
		}
	}
	return (c);
}
