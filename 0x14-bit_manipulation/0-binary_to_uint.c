#include "main.h"
/**
 * binary_to_uint - Converts a binary string to unsigned int
 * @b: the binary string to convert
 *
 * Return: num - the converted number in decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, len = 0, bit = 1;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	while (len > 0)
	{
		if (b[--len] == '1')
			num += bit;
		bit = bit << 1;
	}
	return (num);
}
