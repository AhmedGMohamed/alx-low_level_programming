#include "main.h"

/**
 * _isdigit - checks if the character is a digit
 * @c: the ascii number of the character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0x30 && c <= 0x39)
	{
		return (1);
	}
	return (0);
}
