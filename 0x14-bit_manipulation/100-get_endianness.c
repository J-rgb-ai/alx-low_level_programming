#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: 0 or -1
 */
int get_endianness(void)
{
	int che = 1;
	char *endian = (char *)&che;

	if (*endian == 1)
		return (1);
	return (0);
}
