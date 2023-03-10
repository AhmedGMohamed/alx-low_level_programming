#include "main.h"
/**
 * _islower - checks if the given character is lowercase or not
 * @c: the character to check
 *
 * Return: 1 if the character is lowercase
 * 0 if otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
