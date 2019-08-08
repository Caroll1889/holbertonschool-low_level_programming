#include "holberton.h"

/**
*get_bit - return the value of a bit
*@n: number
*@index: index
*Return: 0 or 1
**/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	n >>= index;

	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
