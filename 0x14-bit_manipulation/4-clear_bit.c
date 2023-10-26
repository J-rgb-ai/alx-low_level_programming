#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 at 
 * a given index
 * @n: pointer to the long int to modify
 * @index: index of bit to modify
 * Return: 1 if it worked -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	*n = *n & ~mask;
	return (1);
}
