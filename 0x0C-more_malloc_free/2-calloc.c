#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array.
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated_memory;
	if (nmemb == 0 || size == 0)

	{
		return (NULL);
	}

	allocated_memory = malloc(nmemb * size);

	if (allocated_memory == NULL)
	{
		return (NULL);
	}

	memset(allocated_memory, 0, nmemb * size);

	return (allocated_memory);
}
