#include "holberton.h"

/**
*set_bit - set the value of a bit
*@n: number
*@index: index
*Return: 1 or -1
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 64)
	{
		return (-1);
	}

	mask = 1 << index;

	*n = *n | mask;
	return (1);
}
