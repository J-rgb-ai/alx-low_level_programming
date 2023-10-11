#include "function_pointers.h"
/**
 * array_iterator - excecutes a function given a parameter on each element
 * @array: pointer to array
 * @size: integer value of size
 * @action: action to be performed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

		if (array != NULL && action != NULL)
			for (i = 0; i < size; i++)
			{
				action(array[i]);
			}
}
