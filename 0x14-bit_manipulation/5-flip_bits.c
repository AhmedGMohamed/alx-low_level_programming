#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns number of bits to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: num - the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0, bit1, bit2;

	while (n > 0 || m > 0)
	{
		bit1 = n ^ ((n >> 1) << 1);
		bit2 = m ^ ((m >> 1) << 1);
		if ((bit1 ^ bit2) == 1)
			num++;
		n >>= 1, m >>= 1;
	}
	return (num);
}
