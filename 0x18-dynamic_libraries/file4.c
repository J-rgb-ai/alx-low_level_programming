#include "main.h"
#include <stddef.h>

/**
 * _memcpy - copies memory area
 * @dest: destination area of copied bytes
 * @src: source of bytes
 * @n: number of copied bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n && src[t] != '\0'; t++)
		dest[t] = src[t];
	for (; t < n; t++)
		dest[t] = '\0';

	return (dest);
}

/**
 * _strchr - locates a character in a string
 * @s: string pointed by the pointer
 * @c: characterto be found
 * Return: pointer to the 1st occurrence of char c
 * in the string s, else NULL if the char is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int t;

	for (t = 0; s[t] != '\0'; t++)
	{
		if (s[t] == c)
			return (s + t);
	}
	if (s[t] == c)
		return (s + t);

	return (NULL);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: consist of bytes to be accepted in the initial
 * segment of s
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = 0;

	if ((s == NULL) || (accept == NULL))
		return (t);
	while (*s && _strchr(accept, *s++))
	{
		t++;
	}
	return (t);
}

/**
 * _strpbrk - searches for any set of bytes in a string
 * @s: string pointed by the pointer
 * @accept: holds bytes to be matched
 * Return: a pointer to byte if bytes matches else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}

/**
 * _strstr - locates a substring
 * @haystack: string pointer  to be searched
 * @needle: pointer to substring to find
 * Return: pointer to the beginning of the located substring
 * else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptrn1, *ptrn2, *ptrn3;

	for (ptrn1 = haystack; *ptrn1 != '\0'; ptrn1++)
	{
		ptrn2 = ptrn1;
		ptrn3 = needle;
		while (*ptrn3 != '\0' && *ptrn2 == *ptrn3)
		{
			ptrn2++;
			ptrn3++;
		}
		if (*ptrn3 == '\0')
		{
			return (ptrn1);
		}
	}
	return (NULL);
}
