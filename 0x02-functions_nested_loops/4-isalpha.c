#include "main.h"
/**
 * _isalpha - checks if the given character an alphabetic letter
 * @c: the character to check
 *
 * Return: 1 if the character is an alphabetic letter
 * 0 if otherwise
 */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
