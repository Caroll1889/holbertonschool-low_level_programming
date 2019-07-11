#include "holberton.h"
int a(int n, int x);

/**
* _sqrt_recursion - returns the natural square root of a number
*@n: number
*Return: the natural square root of a number
**/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (a(n, 1));
}
/**
* a - function to calculate the square root
*@n:number
*@x:number
*Return: x
**/
int a(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (a(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
