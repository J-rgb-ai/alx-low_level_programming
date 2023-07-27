#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if the two strings are equal
 * - 1 if the first string is less than the second string
 * - -1 if the second string is less than the first string
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	for (i = 0; i < s1_len && i < s2_len; i++)
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
	}
	if (s1_len == s2_len)
	{
		return (0);
	}
	if (s1_len > s2_len)
	{
		return (1);
	}
	return (-1);
}
