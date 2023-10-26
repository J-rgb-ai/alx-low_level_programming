#include "main.h"
/**
 * get_bit - returns value of a bit at a given index.
 * @n:given index
 * @index: index of the given int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}
	mask = 1UL << index;
	bit = (n & mask) ? 1 : 0;
	return (bit);
}
