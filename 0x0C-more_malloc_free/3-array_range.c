#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: NULL if minis greater than max or if malloc fails
 */
int *array_range(int min, int max)
{
	int size;
	int *result;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	result = (int *)malloc(size * sizeof(int));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		result[i] = min + i;
	}

	return (result);
}
