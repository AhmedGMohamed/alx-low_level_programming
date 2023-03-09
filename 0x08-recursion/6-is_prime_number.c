#include "main.h"
/**
 * check_prime - divides the number b numbers from 2 to n
 * @n: the number to check
 * @curr: the number to divide with
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int curr)
{
	if (n == curr)
	{
		return (1);
	}
	else if (n % curr == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, curr + 1));
	}
}
/**
 * is_prime_number - Checks if the number is prime or not
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, 2));
	}
}
