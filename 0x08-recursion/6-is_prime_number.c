#include "main.h"

int actual_prime(int n, int it);
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - cal if a num is prime recursively
 * @n: number to be evaluated
 * @it: iterator
 *
 * Return: 1 if prime and 0 if not prime
 */
int actual_prime(int n, int it)
{
	if (it == 1)
		return (1);
	if ((n % it == 0) && it > 0)
		return (0);
	return (actual_prime(n, (it - 1)));
}
