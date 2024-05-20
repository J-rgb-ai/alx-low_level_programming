#include "main.h"
/**
 * add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The sum of a and b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of subtracting b from a.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of a and b.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * division - Divides two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of dividing a by b.
 * If b is 0, 0 is returned.
 */
int division(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}

/**
 * mod - Calculates the remainder of the division of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The remainder of dividing a by b.
 * If b is 0, 0 is returned.
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
