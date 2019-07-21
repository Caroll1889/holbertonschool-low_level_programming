#include "holberton.h"

/**
*print_alphabet_x10 - print the alphabet 10 times
*Return: nothing
**/

void print_alphabet_x10(void)
{
	int c, f;

	for (c = 0; c < 10; c++)
	{
		for (f = 'a'; f <= 'z'; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}
}
