#include "main.h"

/**
 * _memcpy - Copies n bytes from source buffer to destination buffer
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: the number of bytes to copy
 *
 * Return: dest - the buffer after copying onto it
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
