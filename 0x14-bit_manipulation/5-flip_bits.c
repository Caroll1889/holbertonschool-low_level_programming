#include "holberton.h"

/**
*flip_bits - return the numbers of bits
*@n: number
*@m: number
*Return: rs
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tam = 63;
	unsigned long int js = 0;
	unsigned long int rs = 0;

	while (tam >= js)
	{
		if ((m & 1) != (n & 1))
		{
			rs++;
		}
		n >>= 1;
		m >>= 1;
		js++;
	}
	return (rs);
}
