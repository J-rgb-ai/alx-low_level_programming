#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: length of string 2
 * Return: string concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, k;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && j < n)
		j++;
	arr = malloc(i + j + 1);
	if (arr == NULL)
		exit(98);
	for (k = 0; k < i; k++)
		arr[k] = s1[k];
	for (k = 0; k < j; k++)
		arr[i + k] = s2[k];
	arr[i + j] = '\0';
	return (arr);
}

