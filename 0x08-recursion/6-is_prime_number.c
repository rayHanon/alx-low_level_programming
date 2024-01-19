#include "main.h"
/**
 * is_prime_number - to check if a number is prime number
 * @n: the number to check
 *
 * Return: 0 if the number is not a prime number or one if it is
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return(0);
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return(0);
	}
	return (1);
}
