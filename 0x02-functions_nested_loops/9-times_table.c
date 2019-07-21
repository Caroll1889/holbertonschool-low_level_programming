#include "holberton.h"

/**
* times_table - print the 9 times table
* Return: nothing
**/

void times_table(void)
{
	int f, c, mul;
	int d, u;

	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c <= 9; c++)
		{
			mul = f * c;
			if (mul >= 10)
			{
				d = mul / 10;
				u = mul % 10;
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (c != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mul + '0');
			}
			if (c != 9)
			{
			_putchar(',');
			}
			if (c == 9)
			{
				_putchar('\n');
			}
		}
	}
}
