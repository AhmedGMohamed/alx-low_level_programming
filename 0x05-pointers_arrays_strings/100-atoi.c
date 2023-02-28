#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: The string to convert
 *
 * Return: num - The converted number
 */

int _atoi(char *s)
{
	int len = 0, num = 0, neg = 0;

	while (s[len] != '\0')
	{
		if (s[len] == '-')
		{
			neg = !neg;
		} else if (s[len] == '+' || s[len] == ' ')
		{
			continue;
		}
		else if (s[len] >= '0' && s[len] <= '9')
		{
			num = num + (s[len] - '0');
			num = num * 10;
		}
		else
		{
			break;
		}
		len++;
	}
	num = num / 10;
	if (neg)
	{
		num = num * -1;
	}
	return (num);
}
