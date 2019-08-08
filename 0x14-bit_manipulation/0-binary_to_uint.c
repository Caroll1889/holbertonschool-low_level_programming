#include "holberton.h"
#include <stdio.h>

/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: poiter to a string
*Return: conv
**/

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int cont = 0, pow;

	if (b == NULL)
	{
		return (0);
	}

	while (b[cont + 1] != '\0')
		cont++;

	pow = 1;
	while (cont >= 0)
	{
		if (b[cont] != '0' && b[cont] != '1')
		{
			return (0);
		}
		conv += (b[cont] - '0') * pow;
		pow *= 2;
		cont--;
	}
	return (conv);
}
