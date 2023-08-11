#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all arguments of the programm
 * @ac: Number of arguments
 * @av: Array of arguments strings
 * Return: pointer to concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	char *result;
	int i, position = 0;

	if (ac == 0 || av  == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 3;
	}

	result = (char *)malloc(sizeof(char) * total_length);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < ac; i++)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position++] = '\n';
	}

	return (result);
}
