#include "main.h"

/**
 * is_prime_number_helper - Check if a number is prime
 * @n: number to be checked
 * @i: divisor to be used
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number_helper(int n, int i)
{
	if (n <= 2)
		return (n == 2);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_helper(n, 2));
}
