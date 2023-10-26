#include "main.h"
/**
 * print_binary - prints binary representation of a number.
 * @n: integer to e printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8 - 1;
	int leading_zero = 1;

	if (n == 0)
		_putchar('0');
	while (size >= 0)
	{
		if ((n >> size) & 1)
		{
			_putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
			_putchar('0');
		size--;
	}
}
