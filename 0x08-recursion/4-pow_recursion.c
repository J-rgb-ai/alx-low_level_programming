#include "main.h"
/**
 * _pow_recursion - power of a number
 * @x: integer
 * @y: power of the integer
 *
 * Return: x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
