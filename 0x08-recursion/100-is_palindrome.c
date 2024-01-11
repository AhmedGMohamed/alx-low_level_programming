#include "main.h"
/**
 * get_last_ptr - gets the pointer to the last character in a string
 * @s: the string to operate on
 *
 * Return: s - a pointer to the last character in the string (non-null pointer)
 */
char *get_last_ptr(char *s)
{
	if (*s == '\0')
	{
		return (--s);
	}
	else
	{
		return (get_last_ptr(++s));
	}
}
/**
 * check_palindrome - compares opposite characters in a string
 * @p1: the pointer to the first character to compare
 * @p2: the pointer to the second character to compare
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *p1, char *p2)
{
	if (*p1 != *p2)
	{
		return (0);
	}
	else
	{
		if (*(++p1) != '\0')
		{
			return (check_palindrome(p1, --p2));
		}
		else
		{
			return (1);
		}
	}
}
/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	char *p2;

	p2 = get_last_ptr(s);
	return (check_palindrome(s, p2));
}
