#include "holberton.h"

/**
* prime - help to calculate a prime
*@b: number
*@n: number
*Return: b
**/
int prime(int n, int b)
{
	if (n == b)
        {
                return (1);
        }
	if (n % b == 0 || n <= 1)
	{
		return (0);
	}
	return (prime(n, b + 1));
}
/**
* is_prime_number - calculates a number prime
*@n: number
*Return: number prime
**/
int is_prime_number(int n)
{
	int b;

	b = 2;

	if (n == 1)
	{
		return (0);
	}
	return (prime(n, b));
}
