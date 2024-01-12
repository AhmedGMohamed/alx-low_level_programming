#include "main.h"
/**
 * _print_rev_recursion - prints a string reversed using recursion
 * @s: the string to output
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*(--s));
	}
}
