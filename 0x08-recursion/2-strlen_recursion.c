#include "main.h"
/**
 * _strlen_recursion - prints the length of a string using recursion
 * @s: the sting to operate on
 *
 * Return: n - the current length of the string
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		n = _strlen_recursion(++s);
		n++;
	}
	else
	{
		return (0);
	}
	return (n);
}
