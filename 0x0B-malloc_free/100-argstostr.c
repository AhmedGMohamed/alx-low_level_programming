#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Finds the length of the string
 * s: the string to check
 *
 * Return: len - the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * argstostr - concatenates program arguments into one string
 * @ac: the number of arguments to concatenate
 * @av: an array of strings containing the arguments to concatenate
 *
 * Return: s - the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int lengths = 0, wlen, i, j, currind;
	char *s = "s";

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		lengths += _strlen(av[i]);
	}
	s = malloc(sizeof(char) * (lengths + ac + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0, currind = 0; i < ac; i++, currind++)
	{
		wlen = _strlen(av[i]);
		for (j = 0; j < wlen; j++, currind++)
			s[currind] = av[i][j];
		s[currind] = '\n';
	}
	s[currind] = '\0';
	return (s);
}
