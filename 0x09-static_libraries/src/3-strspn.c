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
 * _strspn - Finds the number of bytes in the segment with bytes from 'accept'
 * @s: the string to check
 * @accept: the string containing the checking characters
 *
 * Return: n - the number of initial segment bytes in s consisting from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cont = 1, len1, len2, n = 0;

	len1 = _strlen(s);
	len2 = _strlen(accept);
	for (i = 0; i < len1 && cont; i++)
	{
		cont = 0;
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				cont = 1;
				break;
			}
		}
		if (!cont)
		{
			return (n);
		}
	}
	return (n);
}
