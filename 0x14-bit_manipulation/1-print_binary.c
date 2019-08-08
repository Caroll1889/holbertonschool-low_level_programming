#include "holberton.h"

/**
*print_binary - prints the binary
*@n: number given
**/

void print_binary(unsigned long int n)
{
	unsigned long int m = 2, h = 0;


	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (m <= n && h < 62)
	{
		m <<= 1;
		h++;
	}

	if (h != 62)
	{
		m >>= 1;
	}

	while (m != 0)
	{
		if ((m & n) == 0)
		{
			_putchar('0');
			h++;
		}
		else
		{
			_putchar('1');
			h++;
		}
		m >>= 1;
	}
}
