#include "main.h"
/**
 * find_sqrt - Operation to find square root
 * @n: the root number
 * @sq: the current square root
 *
 * Return: sq - the square root of n
 */
int find_sqrt(int n, int sq)
{
	if (sq > n / 2)
	{
		return (-1);
	}
	else if (sq * sq == n)
	{
		return (sq);
	}
	else
	{
		return (find_sqrt(n, sq + 1));
	}
}
/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: the number to operate on
 *
 * Return: sqrt - the natural square root of n
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		sqrt = find_sqrt(n, 2);
		if (sqrt == -1)
		{
			return (-1);
		}
		else
		{
			return (sqrt);
		}
	}
}
