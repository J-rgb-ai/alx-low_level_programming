#include "main.h"

int find_sqrt(int n, int s, int e);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number for which to find the square root
 *
 * Return: resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return  (n);
	}
	else
	{
		return (find_sqrt(n, 1, n));
	}
}
/**
 * find_sqrt - recurses to find the natural
 * square root of a number
 * @n: number for which to find the square root
 * @s: starting point of the binary search
 * @e: ending point of the binary search
 *
 * Return: the resulting square root
 */
int find_sqrt(int n, int s, int e)
{
	if (s <= e)
	{
		int mid = s + (e - s) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square > n)
		{
			return (find_sqrt(n, s, mid - 1));
		}
		else
		{
			return (find_sqrt(n, mid + 1, e));
		}
	}
	return (-1);
}
