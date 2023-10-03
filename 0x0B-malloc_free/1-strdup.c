#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to a string
 * Return: pointer to duplicated string NULL if thre is insufficient
 * memory available
 */
char *_strdup(char *str)
{
	char *str1;
	unsigned int i, k;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

		str1 = (char *)malloc(sizeof(char) * (i + 1));
		if (str1 == NULL)
			return (NULL);
	for (k = 0; k <= i; k++)
		str1[k] = str[k];

	return (str1);
}
