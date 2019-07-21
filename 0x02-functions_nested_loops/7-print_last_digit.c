#include "holberton.h"
#include <stdlib.h>

/**
* print_last_digit - prin the last digit
*@g: number recieved
*Return: ult
**/

int print_last_digit(int g)
{
	int ult;

	ult = abs(g % 10);
	_putchar(ult + '0');
	return (ult);
}
