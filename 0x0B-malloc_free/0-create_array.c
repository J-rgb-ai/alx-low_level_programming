#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size
 * @c: character
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ctr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ctr = malloc(sizeof(c) * size);
	if (ctr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ctr[i] = c;
	return (ctr);
}
