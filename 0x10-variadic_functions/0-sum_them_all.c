#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sreturn the sum of all its parameters
*@n: numbers of arguments
*Return: sum or 0
**/

int sum_them_all(const unsigned int n, ...)
{
	va_list lmc;
	unsigned int sd;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(lmc, n);

	for (sd = 0; sd < n; sd++)
	{
		sum += va_arg(lmc, int);
	}
	va_end(lmc);
	return (sum);
}
