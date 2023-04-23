#include "main.h"
#include <stdlib.h>

/**
 * count_word - count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int count = 0, i = 0;

	while (*(s + i))
	{
		if (*(s + i) == ' ')
			i++;
		else
		{
			count++;
			while (*(s + i) != ' ' && *(s + i) != '\0')
				i++;
		}
	}
	return (count);
}

/**
 * **strtow - splits a string into words
 * @str: str to split
 *
 * Return: pointer to an array of strings - Success
 * or NULL - Error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i = 0, j = 0, len = 0, words, start = 0, end = 0, k = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	len = 0;
	while (*(str + len))
		len++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			start = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			end = i;

			tmp = (char *) malloc(sizeof(char) * (end - start + 1));
			if (tmp == NULL)
				return (NULL);

			for (j = 0; start < end; j++, start++)
				tmp[j] = str[start];
			tmp[j] = '\0';

			matrix[k++] = tmp;
		}
	}

	matrix[k] = NULL;

	return (matrix);
}

