#include "main.h"
/**
 * is_prime_number - to check if a number is prime number
 * @n: the number to check
 *
 * Return: 0 if the number is not a prime number or one if it is
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_or_not(n, 2));
}

/**
 * prime_or_not - Helper function for is_prime_number.
 * @n: The number to check for primality.
 * @i: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int prime_or_not(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_or_not(n, i + 1));
}
