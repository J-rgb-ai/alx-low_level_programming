#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to take fom s2
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len;
	unsigned int s2_len;


	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	result = (char *)malloc(s1_len + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);

	strncpy(result + s1_len, s2, n);

	result[s1_len + n] = '\0';

	return (result);
}

