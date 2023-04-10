#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to change
 * @index: the index of the bit to set
 *
 * Return: 1 if the operation was successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1, temp = *n, len = 0, i = 0;

	if (index >= 64)
		return (-1);
	if (*n == 0)
		return (1);
	while (temp > 0)
	{
		len++;
		temp >>= 1;
	}
	while (i < index)
	{
		bit *= 2;
		i++;
	}
	if (bit <= *n)
		*n &= ~bit;
	return (1);
}
