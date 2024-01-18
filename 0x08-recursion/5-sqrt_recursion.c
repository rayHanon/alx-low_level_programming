#include "main.h"

/**
 * _sqrt_recursion - to find the square root of a given number
 * @n: The number to be squared
 *
 * Return: The square root of n, -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_find(n, 0));
}

/**
 * sqrt_find - function to hwlp find the natural squareroot
 * @n: the number to find square root of
 * @num: the number to give the root
 *
 * Return: The natural square root of n, or -1 if n does not have
 */

int sqrt_find(int n, int num)
{
	if (num * num == n)
		return (num);
	if (num * num > n)
		return (-1);

	return (sqrt_find(n, num + 1));
}
