#include "main.h"

/**
 * _abs - computes the absolute value of a number
 * @n: the number to compute
 *
 * Return: n, the absolute value
 */

int _abs(int n)

{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}

/**
 * print_last_digit - returns the last digit in the given number
 * @n: the number to get the digit from
 *
 * Return: dig, the last digit in the number
 */

int print_last_digit(int n)
{
	int dig;

	n = _abs(n);
	dig = n % 10;
	_putchar(dig+'0');
	return (dig);
}
