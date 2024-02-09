#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representaion of a given number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp = n, dig;
	long int len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (tmp > 0)
	{
		tmp = tmp >> 1;
		len++;
	}
	len--;
	while (len >= 0)
	{
		dig = (n >> len) - ((n >> len >> 1) << 1);
		_putchar(dig + '0');
		len--;
	}
}
