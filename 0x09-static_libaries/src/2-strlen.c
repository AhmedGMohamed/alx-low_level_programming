#include "main.h"

/**
 * _strlen - returns the length of a given array of characters (string)
 * @s: the array of characters (string) to check
 *
 * Return: the length of the given array (string)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
