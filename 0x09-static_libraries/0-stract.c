#include "main.h"
/**
 * *_strcat -  concatenates two strings appending the src
 * string to the dest string, overwriting the terminating null
 * byte(\0) at the end of dest and then adds a terminating
 * null byte
 *
 * @dest: the string to be appended
 * @src: the string to concatenate
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *p1 = dest;

	while (*p1 != '\0')
	{
		p1++;
	}
	while (*src != '\0')
	{
		*p1++ = *src++;
	}
	*p1 = '\0';
	return (dest);
}
