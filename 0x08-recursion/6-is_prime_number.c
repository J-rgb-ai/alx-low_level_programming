#include "main.h"
/**
 * is_prime_number - checks ifan integerr is a prime number or not
 * @n: the number to check for prime
 *
 * Return: 1 if the number prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
