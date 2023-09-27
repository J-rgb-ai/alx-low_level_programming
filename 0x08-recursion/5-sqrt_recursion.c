#include "main.h"
/**
 * _sqrt_helper - computes the square root of a number using a binary search
 * @start: starting index of the search range
 * @end: ending index of the search range
 * @n: number whose square root is being computed
 * @ans: current best approximation of the square root
 *
 * Return: square root of n
 */
int _sqrt_helper(int start, int end, int n, int ans)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else if (start > end)
	{
		if (ans * ans <= n && (ans + 1) * (ans + 1) > n)
			return (ans);
		else
			return (ans + 1);
	}
	else
	{
		int mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);
		if (mid * mid < n)
			return (_sqrt_helper(mid + 1, end, n, mid));
		return (_sqrt_helper(start, mid - 1, n, ans));
	}
}

/**
 * _sqrt_recursion - computes thesquare root of a number using recursion.
 * @n: number whose square root is being computed
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(1, n, n, n));
}
