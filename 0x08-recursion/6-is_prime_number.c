#include "main.h"

/**
 * is_prime_check - Checks if a number is prime recursively.
 * @n: The number to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_check(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (n % divisor == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	return (is_prime_check(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_check(n, 2));
}

