#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: 1st index where value is located
 * If value is not present
 * or if array is NULL
 * must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
