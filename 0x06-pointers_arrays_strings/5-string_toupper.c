#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	i++;
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}
