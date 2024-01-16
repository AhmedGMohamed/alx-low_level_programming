#include "main.h"
#include <stdlib.h>
/**
 * word_len - finds the length of a word inside a string
 * @str: the string to check
 *
 * Return: len - the length of the word
 */
int word_len(char *str)
{
	int len = 0;

	while (str[len] != ' ' && str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * word_cnt - finds the number of words inside a string
 * @str: the string to check
 *
 * Return: cnt - the number of words inside the string
 */
int word_cnt(char *str)
{
	int cnt = 0, i = 0, st = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && st == 0)
			st = 1, cnt++;
		else if (str[i] == ' ' && st == 1)
			st = 0;
		i++;
	}
	return (cnt);
}
/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: words - an array of strings (words)
 */
char **strtow(char *str)
{
	int cnt, i = 0, j, k, len;
	char **words, *word;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	cnt = word_cnt(str);
	if (cnt == 0)
		return (NULL);
	k = cnt;
	words = malloc(sizeof(char *) * (cnt + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len = word_len(str + i);
			word = malloc(sizeof(char) * len);
			for (j = 0; j < len; j++)
				word[j] = str[i + j];
			word[j] = '\0';
			words[cnt - k] = word;
			i += j, k--;
		}
		i++;
	}
	words[cnt] = NULL;
	return (words);
}
