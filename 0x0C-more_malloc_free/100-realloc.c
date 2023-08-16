#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to old memory block
 * @old_size: size of old memory block
 * @new_size: new size of memory block
 *
 * Return: Pointer to reallocated memory block, or NULL on failure or if new_size is zero.
 *         If ptr is NULL, behaves like malloc(new_size).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size;
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);
	free(ptr);

	return (new_ptr);
}
