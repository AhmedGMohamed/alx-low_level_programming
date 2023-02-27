#include "main.h"

/**
 * puts_half - outputs the last half of the string
 * @str: the string to output from
 */

void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = len - (len / 2); i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
