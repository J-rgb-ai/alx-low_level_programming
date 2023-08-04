#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be measured
 *
 * Return: length of the string
 */
void _print_rev_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
