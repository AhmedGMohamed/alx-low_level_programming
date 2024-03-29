#include "main.h"
#include <stdio.h>
/**
 * get_bit - Returns the bit state at the given index
 * @n: the number to check
 * @index: the index of the bit to return
 *
 * Return: bit - the bit at the supplied index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= 64)
		return (-1);
	bit = (n >> index) - ((n >> (index + 1) << 1));
	return (bit);
}
