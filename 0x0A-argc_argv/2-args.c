#include <stdio.h>
/**
 * main - print all supplied arguments (filename included)
 * @argc: number of supplied arguments
 * @argv: array of argument strings
 *
 * Return: always 0
 */
int main(int argc,char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
