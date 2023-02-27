#include "main.h"

/**
 * _puts - outputs an array of characters (string) to stdout
 * @str: the array of characters (string) to output
 *
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
