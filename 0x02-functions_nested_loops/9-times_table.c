#include "main.h"
/**
 * _print - outputs a number to stdout using _putchar
 * @n: the number to output
 */

void _print(int n)
{
	if (n >= 10)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
/**
 * times_table - prints the times table starting from 0 untill 9
 */

void times_table(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			if (i * j < 10)
			{
				_putchar(' ');
			}
			_print(i * j);
		}
		_putchar('\n');
	}
}
