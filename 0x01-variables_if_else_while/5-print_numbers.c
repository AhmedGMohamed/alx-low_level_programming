#include <stdio.h>
/**
 * main - print all single digit numbers from 0 to 10
 *
 * Return: 0 if the code executes successfully
 */
int main(void)
{
	int n = -1;

	while (n++ < 9)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
