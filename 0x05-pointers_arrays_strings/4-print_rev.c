#include "main.h"

/**
 * print_rev - outputs an array of characters (string) to stdout reversed
 * @s: the array of characters (string) to output
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
