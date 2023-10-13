#include <stdarg.h>
/**
 * sum_them_all - sums all the integer
 * @n: first integer
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
