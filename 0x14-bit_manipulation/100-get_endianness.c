#include "main.h"
/**
 * get_endianness - Check the endianness of the CPU
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;

	return (*(char *)&i);
}
