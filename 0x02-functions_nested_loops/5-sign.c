#include "main.h"
/**
 * print_sign - checks if the number is greater, smaller or equal to 0
 * @n: the number to check
 *
 * Return: 1 if the number is greater than 0
 * 0 if the number is equal to 0
 * -1 if the number is smaller than 0
 */

int print_sign(int n)

{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (-1);
}
