#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * count_words - count the number of words in a string,
 * @str: input string
 * Return: numberr off words
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == ' ')
		{
			in_word = 0;
		}
	}
	return (count);
}


/**
 * strtow - split a string  into words
 * @str: the input string
 * Return: pointerr to an array of words, orr NULL on failure.
 */
char **strtow(char *str)
{
	int word_count = count_words(str);
	char **words;
	char *token = strtok(str, " ");
	int word_index = 0;
	int i;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
	{
		return (NULL);
	}

	while (token != NULL)
	{
		words[word_index] = strdup(token);
		
		if (words[word_index] == NULL)
		{
			for (i = 0; i < word_index; i++)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		word_index++;
		token = strtok(NULL, " ");
	}
	words[word_index] = NULL;

	return (words);
}
