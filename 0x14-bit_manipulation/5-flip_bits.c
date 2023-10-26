#include "main.h"
/**
 * flip_bits - counts the numberr of bits needed
 * @n: number
 * @m: number to flip
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int che = n ^ m, bits = 0;

	while (che > 0)
	{
		bits += (che & 1);
		che >>= 1;
	}

	return (bits);
}
