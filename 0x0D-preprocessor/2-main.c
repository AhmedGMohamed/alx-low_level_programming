#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the name of the source file
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
