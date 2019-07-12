#include "holberton.h"
/**
* factorial - returns the factorial of n
*@n: number
*Return:n
**/
int factorial(int n)
{

	if (n == 0 && n < 2)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}