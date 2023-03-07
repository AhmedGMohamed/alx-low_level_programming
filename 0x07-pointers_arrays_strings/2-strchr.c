#include "main.h"
#include <stddef.h>
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
	unsigned int i = 0;
	char *p = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (p);
}
