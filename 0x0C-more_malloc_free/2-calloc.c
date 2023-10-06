#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function to allocate my
 * @nmeb: array elements
 * @size: bytes size
 * Return: string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *byte_ptr;
	size_t total_size = nmemb * size;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	byte_ptr = ptr;
	for (i = 0; i < total_size; ++i)
		byte_ptr[i] = 0;
	return (ptr);
}
