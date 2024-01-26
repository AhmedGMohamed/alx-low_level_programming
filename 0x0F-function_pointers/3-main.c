#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - supplies the program parameters to functions
 * @argc: the number of arguments supplied
 * @argv: an array containing the arguments as strings
 *
 * Return: 0 if the code executes without errors, non-zero number otherwise
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]), n2 = atoi(argv[3]);
	oper = get_op_func(argv[2]);
	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", oper(n1, n2));
	return (0);
}
