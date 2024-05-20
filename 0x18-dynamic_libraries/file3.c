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

/**
 * *_strncat - concatenates two strings using at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: amount of bytes used from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest; /*save the start address of dest*/

	/*advance at most n bytes from src to dest*/
	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	/*If null character is encountered in src before n bytes */
	if (*src == '\0')
	{
		*dest = '\0';
	}

	return (dest_start);
}

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: amount of bytes from src
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 if s1 and s2 are equal,
 * another number if not
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);

}

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to string
 * @b: constant byte
 * @n: bytes of the memory area pointed by s
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		s[t] = b;
	return (s);
}
