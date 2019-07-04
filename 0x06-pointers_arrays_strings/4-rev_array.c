#include "holberton.h"
#include <stdio.h>
/**
*reverse_array - concatenates two strings
*@a: pointer
*@n: number of elements
*Return: Nothing
**/
void reverse_array(int *a, int n)
{
	int d, c;

	for (c = 0; c < n; c++)
	{
		d = a[n - 1];
		a[n - 1] = a[c];
		a[c] = d;
		n--;
	}
}
