#include "main.h"
/**
 * is_prime_number - checks for prime numbers
 * @n: input integer to be checked
 *
 * Return: 1 prime number else 0
 */
int is_prime_number(int n)
{
	int w = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n % w == 0)
	{
		return (0);
	}
	w++;
	return (1);
}
