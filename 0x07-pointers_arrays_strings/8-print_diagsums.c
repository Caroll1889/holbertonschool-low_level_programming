#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of two diagonals
*@a: pointer
*@size: size
*Return: nothing
**/
void print_diagsums(int *a, int size)
{
	int d, sum1, sum2;

	d = 0;
	sum1 = 0;
	sum2 = 0;

	while (d < (size * size))
	{
		sum1 = sum1 + a[d];
		d = d + size + 1;
	}
	d = size -  1;
	while (d < ((size * size) - 1))
	{
		sum2 = sum2 + a[d];
		d = d + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
