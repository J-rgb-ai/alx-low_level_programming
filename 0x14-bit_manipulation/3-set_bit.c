#include "main.h"
/**
 * set_bit - sets value of a bit to 1
 * at a given index.
 * @n: integer array
 * @index: index where 1 is to be set
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}
