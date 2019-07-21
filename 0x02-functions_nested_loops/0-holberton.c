#include "holberton.h"
#include <stdio.h>

/**
* main - print holberton
*Return: 0
**/

int main(void)
{
	int l;
	char x[9] = "Holberton";

	for (l = 0; l < 10; l++)
	{
		_putchar(x[l]);
	}
	_putchar('\n');
	return (0);
}
