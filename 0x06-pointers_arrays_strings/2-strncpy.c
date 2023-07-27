#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = strlen(src);
	int i;

	for (i = 0; i < n && i < src_len; i++)
	{
		dest[i] = src[i];
	}
	dest[n] = '\0';
	return (dest);
}
