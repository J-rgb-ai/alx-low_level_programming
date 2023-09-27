#include "main.h"
#include <string.h>

/**
 * wildcmp_helper - compares two strings
 * @s1: first string
 * @s2: second string
 * @t: integer to run through string s1
 * @m: integer to run through string s2
 * Return: same string 1 otherwise 0
 */
int wildcmp_helper(char *s1, char *s2, int t, int m)
{
	if (s2[m] == '*')
	{
		if (s2[m + 1] == '\0')
		{
			return (1);
		}
		if (s1[t] == '\0')
		{
			return (0);
		}
		return (wildcmp_helper(s1, s2, t + 1, m) ||
				wildcmp_helper(s1, s2, t, m + 1));
	}
	else
	{
		if (s1[t] == '\0')
		{
			return (wildcmp_helper(s1, s2, t + 1, m + 1));
		}
		else
		{
			return (0);
		}
	}
}

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string`:wq
 *
 * Return: same string 1 otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int t = 0;
	int m = 0;

	if (len1 == 0 || len2 == 0)
	{
		return (1);
	}
	return (wildcmp_helper(s1, s2, t, m));
}
