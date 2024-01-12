#include "main.h"

/**
 * _strcpy - Copies the string from src to dest
 * @dest: the array to copy onto - destination string
 * @src: the array to copy from - source string
 *
 * Return: &dest - A pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = src[len];
	return (dest);
}
