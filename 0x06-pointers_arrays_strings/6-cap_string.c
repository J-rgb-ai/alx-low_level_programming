#include "main.h"
#include <string.h>
/**
 * cap_string -  capitalizes all words of a string
 * @s:capitalized string
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	i++;
	{
		if (s[i] == ' ' ||
		s[i] == '\t' || s[i] == ',' ||
		s[i] == ';' ||
		s[i] == '.' ||
		s[i] == '!' ||
		s[i] == '?' ||
		s[i] == '"' ||
		s[i] == '(' ||
		s[i] == ')' ||
		s[i] == '{' ||
		s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
