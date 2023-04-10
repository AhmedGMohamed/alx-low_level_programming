#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: the index of the bit to set
 *
 * Return: 1 if the operation was successful, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;
	if (index >= 64)
		return (-1);
	bit <<= index;
	*n |= bit;
	return (1);
}
