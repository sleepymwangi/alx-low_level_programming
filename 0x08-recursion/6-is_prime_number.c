#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or no
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 *
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check_prime(n, 2));
}

/**
 * check_prime - helper function to recursively check if a number is prime
 * @n: the number to check
 * @i: the divisor to check n against
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i == n / 2)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
