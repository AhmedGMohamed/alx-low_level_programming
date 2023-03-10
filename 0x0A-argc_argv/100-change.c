#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimal amount of coins needed for reaching cents in args
 * @argc: the number of arguments
 * @argv: array of argument strings
 *
 * Available coins: 25, 10, 5, 2, 1 cent(s)
 * e.x: 100 --> 4 (4 * 25 cents)
 * e.x: 13 --> 3 (1 * 10 + 1 * 2 + 1 * 1 cent(s))
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents > 0)
	{
		coins += cents / 25;
		cents %= 25;
		coins += cents / 10;
		cents %= 10;
		coins += cents / 5;
		cents %= 5;
		coins += cents / 2;
		cents %= 2;
		coins += cents;
	}
	printf("%d\n", coins);
	return (0);
}
