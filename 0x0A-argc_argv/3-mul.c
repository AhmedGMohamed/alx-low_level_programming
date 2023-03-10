#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of two number
 * @argc: the number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 if the code executes successfully
 *	   1 if not enough arguments are supplied
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);
	return (0);
}
