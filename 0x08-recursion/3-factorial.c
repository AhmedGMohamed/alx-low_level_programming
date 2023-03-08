#include "main.h"
/**
 * factorial - Finds the factorial of a number
 * @n: the number to find the factorial of
 *
 * Return: n - the current length of the string
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
