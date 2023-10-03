#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;
	unsigned int i = 0;
	unsigned int j = 0;
	char *s3;

	/*if (s1 == NULL)
	 	s1 = "";
	if (s2 == NULL)
		s2 = "";*/

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		s3 [i + j] = s2[j];
		j++;
	}
	s3[i + j] = \'0';
	return(s3);
}
