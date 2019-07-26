#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*print_numbers - print the numbers
*@n: numbers of arguments
*@separator: string between numbers
*Return: nothing
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int sr;
	va_list num;

	va_start(num, n);

	for (sr = 0; sr < n; sr++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (separator != NULL && sr < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(num);
	printf("\n");
}
