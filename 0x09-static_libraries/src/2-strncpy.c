#include "main.h"

/**
 * _strncpy - copies at most n characters from src to dest
 * @dest: array of characters (string) to paste onto
 * @src: array of characters (string) to copy from
 * @n: the number of characters to copy into dest
 *
 * Return: dest - the final string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
