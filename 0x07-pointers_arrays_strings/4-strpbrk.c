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
 * _strpbrk - Finds the first occurrence in 's' of any bytes in string accept
 * @s: the string to check
 * @accept: the string containing the checking characters
 *
 * Return: c - a pointer to the first occurrence of character
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len1, len2, max;
	char *c = 0;

	len1 = max = _strlen(s);
	len2 = _strlen(accept);
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				if (i <= max)
				{
					max = i;
					c = &s[i];
				}
				break;
			}
		}
	}
	return (c);
}
