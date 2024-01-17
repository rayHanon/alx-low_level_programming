#include "main.h"
#include <stdio.h>

/**
 * factorial - Computes the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the given number, or -1 if n is less than 0.
 */
int factorial(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}
