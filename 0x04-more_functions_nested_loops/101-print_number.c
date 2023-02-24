#include "main.h"
/**
 * print_number - prints a numbers using _putchar
 * @n: the number to print
 */

void print_number(int n)
{
	int power = 1e9;

	if (n < 0)
	{
		_putchar('-');
	}
	if (n == 0)
	{
		power = 1;
	}
	while ((n / power) == 0 && n != 0)
	{
		power = power / 10;
	}
	while (power != 0)
	{
		int digit = (n / power) % 10;

		if (digit < 0)
		{
			digit = digit * -1;
		}
		_putchar('0' + digit);
		power = power / 10;
	}
}
