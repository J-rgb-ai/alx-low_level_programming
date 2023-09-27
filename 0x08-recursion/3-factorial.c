#include "main.h"
/**
 * factorial -  returns the factorial of a num
 * @n: number to be factorial
 * Return: 0 success -1 error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
