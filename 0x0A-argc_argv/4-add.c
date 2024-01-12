#include <stdio.h>
#include <stdlib.h>
/**
 * check_num - checks if the string is a valid number
 * @s: the string to check
 *
 * Return: 1 if the string is a valid number, 0 otherwise
 */
int check_num(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else if ((*s >= 0x30 && *s <= 0x39) || *s == '-')
	{
		return (check_num(++s));
	}
	else
	{
		return (0);
	}
}
/**
 * main - prints the summation of all supplied numbers from arguments
 * @argc: the number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 if the code executes successfully
 *	   1 if any of the supplied arguments is not a digit
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
