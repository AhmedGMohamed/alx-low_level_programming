#include "main.h"
/**
  * _strlen - finds the length of a string
  * @s: the string to check
  *
  * Return: l - the length of the string
  */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
/**
 * _strchr - Finds the first occurence of a character inside a string
 * @s: the string to check
 * @c: the character to find
 *
 * Return: NULL if the character is not in the string
 *	   p  - the pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0, len;

	len = _strlen(s);
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
