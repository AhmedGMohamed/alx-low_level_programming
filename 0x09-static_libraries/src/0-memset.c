#include "main.h"

/**
 * _memset - fills the first 'n' bytes with a given constant byte
 * @s: the buffer to fill
 * @b: the constant byte to fill the buffer with
 * @n: the number of bytes to replace
 *
 * Return: s - the modified buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
