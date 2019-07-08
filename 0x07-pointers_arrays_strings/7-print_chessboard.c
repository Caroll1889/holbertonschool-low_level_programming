#include "holberton.h"
/**
* print_chessboard - prints the cheesboard
*@a: pointer
*Return: nothing
**/
void print_chessboard(char (*a)[8])
{
	int f, d;

	for (f = 0; f < 8; f++)
	{
		for (d = 0; d < 8; d++)
		{
			_putchar(a[f][d]);

			if (d == 7)
			{
				_putchar('\n');
			}
		}

	}
}
